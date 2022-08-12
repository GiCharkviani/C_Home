#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;

    in_file.open("/Users/giorgi.charkviani/Desktop/Learning/C++/C_Home/WorkSpaces/16.IO_And_Streams/ReadFile_3/william.txt");

    if(!in_file) {
        std::cerr << "Can't read file" << std::endl;
        return 1;
    }

    char c {};

    while(in_file.get(c)) {
        std::cout << c;
    }

    std::cout << std::endl;
    in_file.close();

    return 0;
}