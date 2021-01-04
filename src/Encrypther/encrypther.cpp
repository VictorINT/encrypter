#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <bitset>

using namespace std;
//reverse
string static Encrypter::reverse(string s){
	string r = "";
	for(int i = s.size(); i != 0; i--){
		r.push_back(s.at(i));
	}
	return r;
}

//change base
vector<char> static Encrypter::changeBase(string s, char thisBase, char newBase){
	vector<char> ans;
	
}

///////bases

//10
vector<char> static Encrypter::changeBaseTo10(vector<char> v1, char base){
	vector<char> ans;
	if(base == 2){
		
	} else if(base == 10){

	} else if(base == 16){
		
	} else if(base == 's'){
			
	} else {
		return -1;
	}
}

//2
vector<char> static Encrypter::changeBaseTo2(vector<char> v1){
	vector<char> ans;
	string binary = "";
	for(int i = 0; i < v1.size(); i++){
		binary.push_back(bitset<8>(v1.at(i)).to_string()); //to binary
	}
	return ans;
}

//16
vector<char> static Encrypter::changeBaseTo16(vector<char> v1){
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
vector<char> static Encrypter::changeBaseToCaesar(vector<char> v1){
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