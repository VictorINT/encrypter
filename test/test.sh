#!bin/bash
g++ example.cpp ../src/Encrypter.cpp -o enc_test
./enc_test
rm enc_test
