//
// Created by mt on 2019/3/7.
//

#include <iostream>
#include <string>
#include "RandomString.h"

void RandomString::printRandomStrings(int length, int count) {
    std::uniform_int_distribution<int> distribution(0, 61);

    std::string str;
    str.resize(length);
    for (int i = count; i--;) {
        for (int j = length; j--;) {
            int n = distribution(randomEngine);
            if (n < 26) {
                str[j] = 'A' + n;
            } else if (n < 52) {
                str[j] = 'a' + n - 26;
            } else {
                str[j] = '0' + n - 52;
            }
        }
        std::cout << str << '\n';
    }
    std::cout << std::flush;
}
