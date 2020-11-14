#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

const int args = 3;

void parseTraceFile(std::vector<char> &instructions, std::vector<unsigned long long> &addresses,
                    const std::string &traceFile);
