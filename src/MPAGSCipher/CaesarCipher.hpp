#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

//Declare Caesar Cipher class
//Implement constructor for caesar cipher class

class CaesarCipher{ //This has the "CaesarCipher"::CaesarChipher part 
    public:
        int key{0}; //Initialises key with a default value in case one not given in constructor
        CaesarCipher(const int input_key) { //This is the CaesarCipher::"CaesarCipher" part
            key = input_key;
        }
};


#endif //MPAGSCIPHER_CAESARCIPHER_HPP