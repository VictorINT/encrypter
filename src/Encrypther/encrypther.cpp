#include <iostream>
#include <vector>

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
}

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