#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "[-] Missing Arguments \n";
        return -1;
    }
    
    std::string command = argv[1];
    
    if(command == "--run-cpp" && argc == 3) {
        std::string path_to_cpp = argv[2];
        std::string cmd = "g++ " + path_to_cpp;

        system(cmd.c_str());
        system("./a.out");
    }
}