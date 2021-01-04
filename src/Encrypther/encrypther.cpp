#include <iostream>
#include <vector>

using namespace std;

string static encrypter::reverse(string s){
	string r = "";
	for(int i = s.size(); i != 0; i--){
		r.push_back(s.at(i));
	}
	return r;
}