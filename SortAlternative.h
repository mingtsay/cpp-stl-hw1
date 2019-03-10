//
// Created by mt on 2019/3/10.
//

#ifndef CPP_STL_HW1_SORTALTERNATIVE_H
#define CPP_STL_HW1_SORTALTERNATIVE_H

#ifndef CHARACTER_TABLE_CREATION
#define CHARACTER_TABLE_CREATION
#endif //CHARACTER_TABLE_CREATION

#include <vector>
#include "SortString.h"

struct StringTableCompare {
    bool operator()(const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &,
                    const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &) const;
};

struct StringTablePrint {
    std::ostream &ostream;

    explicit StringTablePrint(std::ostream &os);

    void operator()(const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &) const;
};

class SortAlternative : public SortString {
private:
    std::vector<char> string_table;
    std::vector<std::pair<std::vector<char>::iterator, std::vector<char>::iterator>> lines;
public:
    void input() override;

    void createCharTable() override;

    void sort() override;

    void output() override;
};


#endif //CPP_STL_HW1_SORTALTERNATIVE_H
