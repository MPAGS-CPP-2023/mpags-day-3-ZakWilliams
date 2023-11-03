#include "CaesarCipher.hpp"

CaesarCipher::CaesarCipher(const std::size_t input_key, const bool input_encrypt) : key{input_key}, encrypt{input_encrypt} //Assigns a value of key equal to input key - it is done this way to protect class scope of key, as we want this key to be identified as the same value as the key in the class variable
{
}

CaesarCipher::CaesarCipher(const std::string& input_key, const bool input_encrypt) : key{0}, encrypt{input_encrypt}//Assigns a value of key = 0, and does some other stuff
{ //after assigning key in class to have a value of '0', then will perform stuff in case given input_key is not of readable integer type
    if (!input_key.empty()) {
        // Before doing the conversion we should check that the string contains a
        // valid positive integer.
        // Here we do that by looping through each character and checking that it
        // is a digit. What is rather hard to check is whether the number is too
        // large to be represented by an unsigned long, so we've omitted that for
        // the time being.
        // (Since the conversion function std::stoul will throw an exception if the
        // string does not represent a valid unsigned long, we could check for and
        // handled that instead but we only cover exceptions very briefly on the
        // final day of this course - they are a very complex area of C++ that
        // could take an entire course on their own!)
        for (const auto& elem : input_key) {
            if (!std::isdigit(elem)) {
                std::cerr
                    << "[error] cipher key must be an unsigned long integer for Caesar cipher,\n"
                    << "        the supplied key (" << input_key
                    << ") could not be successfully converted" << std::endl;
                return;
            }
        }
        key = std::stoul(input_key);
    }
}

std::string CaesarCipher::applyCipher(const std::string& inputText) {
    //take input string
    //produce and return output string  
    const std::size_t truncatedKey{ key % alphabetSize};
    std::string outputText{""};

    char processedChar{'x'};
    for (const auto& origChar : inputText) {
        // For each character in the input text, find the corresponding position in
        // the alphabet by using an indexed loop over the alphabet container
        for (size_t i{0}; i < alphabetSize; ++i) {
            if (origChar == alphabet[i]) {
                // Apply the appropriate shift (depending on whether we're encrypting
                // or decrypting) and determine the new character
                // Can then break out of the loop over the alphabet
                if (encrypt) {
                    processedChar = alphabet[(i + truncatedKey) % alphabetSize];
                } else {
                    processedChar = alphabet[(i + alphabetSize - truncatedKey) %
                                             alphabetSize];
                }
                break;
            }
        }

        // Add the new character to the output text
        outputText += processedChar;
    }

    return outputText;
}