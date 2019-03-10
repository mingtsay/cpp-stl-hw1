//
// Created by mt on 2019/3/10.
//

#ifndef CPP_STL_HW1_SORTSTRING_H
#define CPP_STL_HW1_SORTSTRING_H

class SortString {
public:
    virtual void input() = 0;

    #ifdef CHARACTER_TABLE_CREATION

    virtual void createCharTable() = 0;

    #endif //CHARACTER_TABLE_CREATION

    virtual void sort() = 0;

    virtual void output() = 0;
};

#endif //CPP_STL_HW1_SORTSTRING_H
