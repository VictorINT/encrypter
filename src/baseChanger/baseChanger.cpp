#include "baseChanger.h"

string toDeca(string something){
    string deca = "";
    stringstream ss;
    ss << dec << something;
    ss >> deca;
    return deca;
}

string toHexa(string something){
    string hexa = "";
    stringstream ss;
    ss << hex << something;
    ss >> hexa;
    return hexa;
}

string toBinary(string s){
    string binary = "";
    stringstream ss;
    for (size_t i = 0; i < s.size(); ++i){
       ss << bitset<8>(s.c_str()[i]);
       string news = "";
       ss >> news;
       binary = binary.append(news);
    }
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
