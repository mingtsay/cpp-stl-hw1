//
// Created by mt on 2019/3/10.
//

#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include "SortSimple.h"

void SortSimple::input() {
    std::string line;
    while (std::getline(std::cin, line)) {
        container.push_back(line);
    }
}

void SortSimple::sort() {
    std::sort(container.begin(), container.end());
}

void SortSimple::output() {
    std::copy(container.begin(), container.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    std::cout.flush();
}
