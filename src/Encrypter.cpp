#include "Encrypter.h"

//constructor
Encrypter::Encrypter(string encryptionKey){
    key = encryptionKey;
    if (key.size() < 5){
        key += generateRandomKey(5-key.size());
    }
}

string Encrypter::encrypt(string s){ //returns the encrypted text
    string encryptedText = s;
    textTransformer::merge(encryptedText, key);
    encryptedText = toCaesar(encryptedText, textTransformer::asciiAccumulate(key));
    textTransformer::reverse(encryptedText);
    if ((int)key[0]%2 == 0){
       encryptedText = toHexa(encryptedText);
        if ((int)key[1]%2 == 0){
            encryptedText = toDeca(encryptedText);
            textTransformer::reverse(encryptedText);
            encryptedText = toBinary(encryptedText);
        } else {
            encryptedText = toBinary(encryptedText);
            textTransformer::reverse(encryptedText);
            encryptedText = toDeca(encryptedText);
        }
    } else {
        encryptedText = toBinary(encryptedText);
        if ((int)key[1]%2 == 0){
            encryptedText = toDeca(encryptedText);
            textTransformer::reverse(encryptedText);
            encryptedText = toHexa(encryptedText);
        } else {
            encryptedText = toHexa(encryptedText);
            textTransformer::reverse(encryptedText);
            encryptedText = toDeca(encryptedText);
        }
    }
    return encryptedText;
}

string Encrypter::decrypt(string s){ //returns the decrypted text //TODO: still in progress
    string decryptedText;
    return decryptedText;
}

void Encrypter::generateKeyFile(const string& filename){
    filesystem::path runningPath = filesystem::current_path() / filename;
    ofstream file;
    file.open(runningPath.string());
    file << generateRandomKey(256);
}

string Encrypter::generateRandomKey(int keyLenght){
    int random;
    string rndKey;
    for (int i = 0; i < keyLenght; i++){
        random = rand() % 95 + 32;
        rndKey.push_back((char)random);
    }
    return rndKey;
}

void Encrypter::loadKeyFromFile(const string& filename){
    filesystem::path runningPath = filesystem::current_path() / filename;
    ifstream file;
    file.open(runningPath.string());
    getline(file, key);
}