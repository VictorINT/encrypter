/*
This file is only for testing purposes
*/

#include <iostream>
#include "../src/Encrypter.h"

using namespace std;

int main(){
    string skey, plainText;
    cout << "You want to encrypt(e) or decrypt(d)? ";
    string mode;
    getline(cin, mode);

    cout << "Key(16 characters or longer): "; getline(cin, skey);
    cout << "Text: "; getline(cin, plainText);

    auto* key = (unsigned char *) skey.c_str();
    auto* input = (unsigned char *) plainText.c_str();
    auto* main = new Encrypter(256);

    if (mode == "e" || mode == "encryption")
    {
        cout << "\n================Encrypted text=================\n" << toHex(reinterpret_cast<char*>(main->encrypt(input, strlen(reinterpret_cast<const char *>(input)) * sizeof(unsigned char), key))) << endl;
    } 
    else if(mode == "d" || mode == "decryption") 
    {
        cout << "\n================Decrypted text=================\n" << main->decrypt((unsigned char *) fromHex(plainText).c_str(), fromHex(plainText).length(), key) << endl;
    } 
    else 
    {
        cout << "\nUnknown action";
    }
}
