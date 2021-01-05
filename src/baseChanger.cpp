#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
#include <bitset>

using namespace std;

string toDeca(string something){
    string deca = "";
    int decaInt = stoi(something);
    deca = to_string(decaInt);
    return deca;
}

string toHexa(string something){
    string hexa = "";
    int decaInt = stoi(something);
    stringstream ss;
    ss << hex << decaInt;
    ss >> hexa;
    return hexa;
}

string toBinary(string something){
    string binary = "";
    int decaInt = stoi(something);
    stringstream ss;
    ss << decaInt;
    string s;
    ss >> s;
    int BinInt = bitset<32>(s, 2).to_ulong();
    return binary;
}

string toCaesar(string s, short key){
    string result = ""; 
    for (int i=0;i<s.length();i++){ 
        if (isupper(s[i])) 
            result += char(int(s[i]+key-65)%26 +65); 
    else
        result += char(int(s[i]+key-97)%26 +97); 
    } 
    return result;
}
//enc(n) -> dec(26-n)