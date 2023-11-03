#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

struct ProgramSettings{
    bool helpRequested;
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipherKey;
    bool encrypt; //Whether to encrypt (true) or decrypt (false)
};

bool processCommandLine(const std::vector<std::string>& cmdLineArgs,
                        ProgramSettings& cmd_line);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP