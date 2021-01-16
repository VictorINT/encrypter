#ifndef ENCRYPTER_H
#define ENCRYPTER_H

#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <filesystem>
#include "baseChanger/baseChanger.h"
#include "textTransform/text_transform.h"

class Encrypter {
    public:
        Encrypter(std::string encryptionKey = "default");

        std::string encrypt(std::string s); //returns the encrypted text
        std::string decrypt(std::string s); //returns the decrypted text

        //setters and getters
        std::string getkey() { return key; }
        void setkey(std::string val) { key = val; }

        //Useful functions
        //static function
        static void generateKeyFile(const std::string& filename = "key.txt");
        
        //nonstatic functions
        void loadKeyFromFile(const std::string& filename = "key.txt");
    protected:
        std::string key;

    private:
        static std::string generateRandomKey(int keyLength);
};

#endif // ENCRYPTER_H
