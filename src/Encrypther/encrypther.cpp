#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

string static Encrypter::reverse(string s){
	string r = "";
	for(int i = s.size(); i != 0; i--){
		r.push_back(s.at(i));
	}
	return r;
}

vector<char> static Encrypter::changeBase(string s){
	vector<char> ans;
}

vector<char> static Encrypter::changeBaseTo10(vector<char> v1){
	vector<char> ans;
}

vector<char> static Encrypter::changeBaseTo2(vector<char> v1){
	vector<char> ans;
	string binary = "";
	for(int i = 0; i < v1.size(); i++){
		binary.push_back(bitset<8>(v1.at(i)).to_string()); //to binary
	}
	return ans;
}

// void decToBinary(int n) 
// { 
//     int binaryNum[32]; 
//     int i = 0; 
//     while (n > 0) { 
//         binaryNum[i] = n % 2; 
//         n = n / 2; 
//         i++; 
//     } 
//     for (int j = i - 1; j >= 0; j--) 
//         cout << binaryNum[j]; 
// } 

vector<char> static Encrypter::changeBaseTo16(vector<char> v1){
	vector<char> ans;
}

vector<char> static Encrypter::changeBaseToCaesar(vector<char> v1){
	vector<char> ans;
}
/*
char static encrypter::get_base(string s){
	char biggest number = 0;
	for(int i = 0; i < s.size(); i++){
		if()
	}
}
*/