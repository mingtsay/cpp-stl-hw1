//
// Created by mt on 2019/3/10.
//

#include <iostream>
#include <string>
#include "RandomString.h"

int main(int argc, char *argv[]) {
    std::ios::sync_with_stdio(false);

    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " <String Length> <Count>" << std::endl;
        return EXIT_FAILURE;
    }

    try {
        int length = std::stoi(std::string(argv[1]));
        int count = std::stoi(std::string(argv[2]));

        std::cerr << "Generating random strings... (Length: " << length << ", Count: " << count << ")" << std::endl;

        RandomString randomString;
        randomString.printRandomStrings(length, count);

        std::cerr << "Random strings has been generated." << std::endl;
    } catch (std::exception &exception) {
        std::cerr << "Exception: " << exception.what() << std::endl;
        std::cerr << "Usage: " << argv[0] << " <String Length> <Count>" << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
