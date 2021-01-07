/*
This file is only for testing purposes
*/

#include <iostream>
#include "Encrypter.h"

using namespace std;

int main(){
    string key, text, finalText;
    cout << "Key: "; getline(cin, key);
    cout << "Text: "; getline(cin, text);
    auto* main = new Encrypter(key);
    finalText = main->encrypt(text);
    cout << finalText;
}