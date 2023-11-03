#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

//bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
//                        bool& helpRequested, bool& versionRequested,
//                        std::string& inputFile, std::string& outputFile,
//                        std::string& cipherKey, bool& encrypt);


    // Options that might be set by the command-line arguments
    //bool helpRequested{false};
    //bool versionRequested{false};
    //std::string inputFile{""};
    //std::string outputFile{""};
    //std::string cipherKey{""};
    //bool encrypt{true};

bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& cmd_line);

struct ProgramSettings{
    bool helpRequested;
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipherKey;
    bool encrypt; //Whether to encrypt (true) or decrypt (false)
};

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP