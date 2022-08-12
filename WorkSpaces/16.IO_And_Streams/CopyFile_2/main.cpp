#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::ifstream in_file {"/Users/giorgi.charkviani/Desktop/Learning/C++/C_Home/WorkSpaces/16.IO_And_Streams/CopyFile_2/william.txt"};
    std::ofstream out_file {"/Users/giorgi.charkviani/Desktop/Learning/C++/C_Home/WorkSpaces/16.IO_And_Streams/CopyFile_2/william_copy.txt"};


    if(!in_file) {
        std::cerr << "Error opening input file" << std::endl;
        return 1;
    }

    if(!out_file) {
        std::cerr << "Error opening output file" << std::endl;
        return 1;
    }

    char c {};

    while(in_file.get(c))
        out_file.put(c);

    std::cout << "File copied" << std::endl;

    in_file.close();
    out_file.close();

    return 0;
}