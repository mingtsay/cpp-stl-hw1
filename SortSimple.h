//
// Created by mt on 2019/3/10.
//

#ifndef CPP_STL_HW1_SORTSIMPLE_H
#define CPP_STL_HW1_SORTSIMPLE_H

#include <vector>
#include "SortString.h"

class SortSimple : public SortString {
private:
    std::vector<std::string> container;
public:
    void input() override;

    void sort() override;

    void output() override;
};


#endif //CPP_STL_HW1_SORTSIMPLE_H
