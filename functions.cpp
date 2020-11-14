#include "functions.h"

void parseTraceFile(std::vector<char> &instructions, std::vector<unsigned long long> &addresses,
                    const std::string &traceFile) {

    // Temporary variables
    char instruction;
    unsigned long long address;

    // Open traceFile for reading
    std::ifstream infile(traceFile);

    // The following loop will read a char and
    // a hexadecimal number each time and then output them
    while (infile >> instruction >> std::hex >> address) {
        instructions.push_back(instruction);
        addresses.push_back(address);
    }
}
