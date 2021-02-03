#include "text_transform.h"


int textTransformer::asciiAccumulate(const std::string& key){
	int sum = 0;
	for(auto c: key){
		sum += c;
	}
	return sum;
}