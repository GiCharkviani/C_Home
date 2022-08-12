#include <iostream>
#include <fstream>

int main() {
    std::ifstream in_file;
    std::string line;
    int num;
    double total;

    in_file.open("/Users/giorgi.charkviani/Desktop/Learning/C++/C_Home/WorkSpaces/16.IO_And_Streams/ReadFile_1/myText.txt");

    if(!in_file) {
        std::cerr << "Can't read file" << std::endl;
        return 1;
    }

    in_file >> line >> num >> total;
    std::cout << line << std::endl;
    std::cout << num << std::endl;
    std::cout << total << std::endl;

    in_file.close();

    return 0;
}