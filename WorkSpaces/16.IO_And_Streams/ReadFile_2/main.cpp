#include <iostream>
#include <fstream>
#include <iomanip>

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

    // this is also good:
//    while(in_file >> line >> num >> total) {
//        std::cout << std::setw(10) << std::left << line
//                  << std::setw(10) << num
//                  << std::setw(10) << total
//                  << std::endl;
//    }

    while(!in_file.eof()) {
        in_file >> line >> num >> total;

        std::cout << std::setw(10) << std::left << line
                  << std::setw(10) << num
                  << std::setw(10) << total
                  << std::endl;
    }

    in_file.close();

    return 0;
}