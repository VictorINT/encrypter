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

vector<char> Encrypter::changeBase(string s, char thisBase, char newBase){
	vector<char> ans;
	
}

///////bases

//10
int Encrypter::hexadecimalToDecimal(char hexVal[]) 
{    
    int len = strlen(hexVal); 
      
    // Initializing base value to 1, i.e 16^0 
    int base = 1; 
      
    int dec_val = 0; 
      
    // Extracting characters as digits from last character 
    for (int i=len-1; i>=0; i--) 
    {    
        // if character lies in '0'-'9', converting  
        // it to integral 0-9 by subtracting 48 from 
        // ASCII value. 
        if (hexVal[i]>='0' && hexVal[i]<='9') 
        { 
            dec_val += (hexVal[i] - 48)*base; 
                  
            // incrementing base by power 
            base = base * 16; 
        } 
  
        // if character lies in 'A'-'F' , converting  
        // it to integral 10 - 15 by subtracting 55  
        // from ASCII value 
        else if (hexVal[i]>='A' && hexVal[i]<='F') 
        { 
            dec_val += (hexVal[i] - 55)*base; 
          
            // incrementing base by power 
            base = base*16; 
        } 
    } 
      
    return dec_val; 
} 
int static Encrypter::convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

string static Encrypter::changeBaseTo10(vector<char> v1, char base){
	string ans = "";
	stringstream ss;
	string str = "";
	unsigned long long idk;
	for(int i = 0; i < v1.size(); i++){
		str.push_back(v1.at(i));
	}
	ss<<str;
	ss>>idk;
	if(base == 2){
		ans.push_back(convertBinaryToDecimal(idk));
	} else if(base == 10){
		ans = str;
	} else if(base == 16){
		
	} else if(base == 's'){
		
	} else {
		return "";
	}
	return str;
}

//2
vector<char> Encrypter::changeBaseTo2(vector<char> v1){
	vector<char> ans;
	string binary = "";
	for(int i = 0; i < v1.size(); i++){
		binary.push_back(bitset<8>(v1.at(i)).to_string()); //to binary
	}
	return ans;
}

//16
vector<char> Encrypter::changeBaseTo16(vector<char> v1){
	vector<char> ans;
    stringstream ss;
    for(int i = 0; i < v1.size(); i++){
        ss << hex << (int)v1.at(i);
        for(int j = 0; j < ss.str().length(); j++){
            ans.push_back(ss.str.at(j));
        }
    }
    return ans;
}

//caesar
vector<char> Encrypter::changeBaseToCaesar(vector<char> v1){
	vector<char> ans;
}

/*

//jeg start
long long static Encrypter::convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        cout << "Step " << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int static Encrypter::convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
//jeg end
*/
