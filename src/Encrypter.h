#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <filesystem>
#include "baseChanger/baseChanger.h"
#include "textTransform/text_transform.h"

using namespace std;

class Encrypter
{
    public:
        Encrypter(string encryptionKey = "default");

        string encrypt(string s); //returns the encrypted text
        string decrypt(string s); //returns the decrypted text

        //setters and getters
        string getkey() { return key; }
        void setkey(string val) { key = val; }

        //Usefull functions
        //static function
        static void generateKeyFile(const string& filename = "key.txt");
        
        //nonstatic functions
        void loadKeyFromFile(const string& filename = "key.txt");
    protected:
        string key;

    private:
        static string generateRandomKey(int keyLenght);
};

#endif // ENCRYPTER_H
