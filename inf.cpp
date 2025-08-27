include <cstdlib>
#include <cstring>
#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 generator(rd());
    size_t rand = generator();

    char filename[100];
    sprintf(filename, "spawninfinatefile_%zu", rand);

    char compileCmd[150];
    sprintf(compileCmd, "g++ spawninfinatefile.cpp -o %s", filename);

    if (!system(compileCmd)) {
        std::cout << "This is a self compile program yep!!!\n";

        char runCmd[150];
        sprintf(runCmd, "./%s", filename);
        system(runCmd);
    } else {
        std::cerr << "Something went wrong\n";
    }
}
