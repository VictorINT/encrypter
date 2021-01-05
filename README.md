# Encrypter
This needs a new name.

This is an encryption algorithm. In building

To use it create a new instance of the class Encrypter, after importing "Encrypter.h"(this will be compiled as a library later, after version 1.0-beta).

`class Encrypter`

## Methods

|     Type    |                    Method                    |                    Documentation                   |    Status    |
|:-----------:|:--------------------------------------------:|:--------------------------------------------------:|:------------:|
|  Encrypter  | Encrypter(`string key = "default"`)          | Returns a new instance of Encrypter                | done         |
|    string   | encrypt(`string s`)                          | Returns the encrypted `s`                          | done         |
|    string   | decrypt(`string s`)                          | Returns the decrypted `s`                          | not finished |
| static void | generateKeyFile(string filename = "key.txt") | Generates a key in the running directory           | done         |
|     void    | loadKeyFromFile(string filename = "key.txt") | Loads the key from a file in the running directory | done         |
|    string   | getKey()                                     | Returns the key                                    | done         |
|     void    | setKey()                                     | Sets the key                                       | done         |

If the key is less than 5 characters long it will filled with random letters and signs

# Building
#TODO: write this documentation @rares45