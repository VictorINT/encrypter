#ifndef BASE_CHANGER_H
#define BASE_CHANGER_H

#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
#include <string>
#include <bitset>
#include <stdexcept>

using namespace std;

//converters to
string toDeca(const string& s);
string toHex(const string& s);
string toBinary(const string& s);
string toCaesar(const string& s, short key);

//converters from
string fromHex(string s);
string fromBinary(const string& s);
string fromDeca(string s);

#endif