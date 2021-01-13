# Encrypter
This needs a new name.

This is an encryption algorithm. In **building**. This is not secure or ready for public use.

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