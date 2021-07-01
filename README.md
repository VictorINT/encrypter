# Encrypter
This needs a new name.

This is an encryption algorithm. In **building/experimenting**.

To use it create a new instance of the class Encrypter, after importing "Encrypter.h".

`class Encrypter`

## Methods

| Type | Method | Documentation |
|-|-|-|
| Encrypter | Encrypter(int keyLen = 256) | Returns a new instance of Encrypter |
| unsigned char* | encrypt(`unsigned char inp[], unsigned int inLen, unsigned  char key[]`) | Returns the encrypted `in` using the `key` |
| unsigned char*  | decrypt(`unsigned char in[], unsigned int inLen, unsigned  char key[]`) | Returns the decrypted `in` using the `key` |

If the key is less than 5 characters long it will filled with random letters and signs
