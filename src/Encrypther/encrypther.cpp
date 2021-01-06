#include "encrypther.h"

//reverse
Encrypter::Encrypter(string encrypthionKey = "Motherfucker"){
    key = encrypthionKey;
}

string Encrypter::reverseString(string& str){
	int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string Encrypter::strToBase(string &str, int base){
    stringstream ss;
    if(base == 2){

    } else if(base == 10){

    } else if(base == 16){

    }
}
