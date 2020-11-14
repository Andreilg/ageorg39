#include "functions.h"

int main(int argc, char *argv[]) {
    if (argc != args) {
        std::cerr << "usage: ./cache-sim input_trace.txt output.txt" << std::endl;
        return 1;
    }

    std::vector<char> instructions;
    std::vector<unsigned long long> addresses;

    parseTraceFile(instructions, addresses, argv[1]);
}
