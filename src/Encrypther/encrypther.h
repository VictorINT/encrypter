#ifndef ENCRYPTHER_H_INCLUDED
#define ENCRYPTHER_H_INCLUDED

#include <sstream>
#include <iomanip>
#include <vector>
#include <bitset>
#include <string.h>

using namespace std;

class Encrypter{
    public:
        Encrypter(string encrypthionKey = "Motherfucker");
    
    private:
        string key;
        static string reverseString(string& str);
};

#endif