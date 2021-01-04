#ifndef ENCRYPTHER_H_INCLUDED
#define ENCRYPTHER_H_INCLUDED

#include <sstream>
#include <iomanip>
#include <vector>
#include <bitset>

using namespace std;

class Encrypter{
    public:
        Encrypter(string encrypthionKey = "Motherfucker");
    
    private:
        string key;
        static string reverseString(string& str);
        static vector<char> changeBase(string s);
        static vector<char> changeBaseTo2(vector<char> v1);
        static vector<char> changeBaseTo10(vector<char> v1);
        static vector<char> changeBaseTo16(vector<char> v1);
        static vector<char> changeBaseToCaesar(vector<char> v1);
};

#endif