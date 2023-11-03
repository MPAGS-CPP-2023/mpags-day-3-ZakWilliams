#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <iostream>
#include <string>

class CaesarCipher{ //This has the "CaesarCipher"::CaesarChipher part
    private:
        std::size_t key{0}; //Initialises key with a default value in case one not given in constructor 
        bool encrypt{false};
        const std::vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                            'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        const std::size_t alphabetSize{alphabet.size()};
    public:
        explicit CaesarCipher(const std::size_t input_key, const bool input_encrypt); //Calls CaesarCipher function for setting the value of key from input_key
        explicit CaesarCipher(const std::string& input_key, const bool input_encrypt); //Calls CaesarCipher function for setting values of input key and whether to encrypt or not
        std::string applyCipher(const std::string& inputText); // Declaring member function - only directly takes input_text as an input, other inputs derived from existant data members (encypher and key)
};

#endif //MPAGSCIPHER_CAESARCIPHER_HPP

