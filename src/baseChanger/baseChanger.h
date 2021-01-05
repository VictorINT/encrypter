#ifndef BASE_CHANGER_H
#define BASE_CHANGER_H

#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
#include <string>
#include <bitset>

using namespace std;

string toDeca(string something);
string toHexa(string something);
string toBinary(string something);
string toCaesar(string s, short key);

#endif