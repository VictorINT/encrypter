#include "encrypther.h"

//reverse
Encrypter::Encrypter(string encrypthionKey = "Motherfucker"){
    key = encrypthionKey;
}

string Encrypter::reverseString(string& str){
	int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i = 0; i < n / 2; i++) 
        swap(str[i], str[n - i - 1]); 
}
