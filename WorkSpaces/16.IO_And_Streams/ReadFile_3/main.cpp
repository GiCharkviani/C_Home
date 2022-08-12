#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    std::ifstream in_file;

    in_file.open("/Users/giorgi.charkviani/Desktop/Learning/C++/C_Home/WorkSpaces/16.IO_And_Streams/ReadFile_3/william.txt");

    if(!in_file) {
        std::cerr << "Can't read file" << std::endl;
        return 1;
    }

    std::string line {};

    while(std::getline(in_file, line)) {
        std::cout << line << std::endl;
    }

    in_file.close();

    return 0;
}