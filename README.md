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

# Building


### Step one: open the project folder in terminal or cmd

### Step two on **linux**: Creating the makefiles

For makefiles for release:
```
cd src
cmake -DCMAKE_BUILD_TYPE=Release -G "CodeBlocks - Unix Makefiles" src
```

In order to create the makefiles for debug just change `Release` to `Debug`

### Step two on **windows**

See https://preshing.com/20170511/how-to-build-a-cmake-based-project/#running-cmake-from-the-command-line for selecting the right generator

### Step three: Build

Release:
```
cmake --build src/cmake-build-release --target all -- -j 6
```

Debug:
```
cmake --build src/cmake-build-debug --target all -- -j 6
```

These commands will build all three targets, resulting in an executable app, a static library and a shared one.

## Targets

`app` - a standalone app that can encrypt and decrypt with a console interface
`static` - just the static library
`shared` - the shared/dynamic library