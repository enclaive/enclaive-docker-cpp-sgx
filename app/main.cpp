#include <fstream>
#include <iostream>
#include <filesystem>
#include <algorithm>

int main()
{
    std::cout << "going to look at your hosts kernel commandline:\n\n";
    std::ifstream t("/proc/cmdline");
    std::stringstream buffer;
    std::cout << t.rdbuf();
}
