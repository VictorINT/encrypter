/*
This file is only for testing purposes
*/

#include <iostream>
#include "Encrypter.h"

using namespace std;

int main(){
    string mode;
    cout << "Encrypt(e) or decrypt(d): "; getline(cin, mode);
    string key, text, finalText;
    cout << "Key: "; getline(cin, key);
    cout << "Text: "; getline(cin, text);
    auto* main = new Encrypter(key);
    if (mode == "e"){
        cout << "\n================Encrypted text=================\n" << main->encrypt(text) << endl;
    } else if (mode == "d") {
        cout << "\n================Decrypted text=================\n" << main->decrypt(text) << endl;
    }

}