//
// Created by mt on 2019/3/7.
//

#ifndef CPP_STL_HW1_RANDOMSTRING_H
#define CPP_STL_HW1_RANDOMSTRING_H

#include <random>

class RandomString {
private:
    std::random_device randomDevice;
    std::default_random_engine randomEngine = std::default_random_engine(randomDevice());
public:
    void printRandomStrings(int length, int count);
};

#endif //CPP_STL_HW1_RANDOMSTRING_H
