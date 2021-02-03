#ifndef BASE_CHANGER_H
#define BASE_CHANGER_H

#include <vector>
#include <string>
#include <cstdio>
#include <sstream>
#include <bitset>
#include <stdexcept>

//converters to
std::string toHex(const std::string& s);
std::string toCaesar(const std::string& s, short key);

//converters from
std::string fromHex(std::string s);

#endif