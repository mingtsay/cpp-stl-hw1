//
// Created by mt on 2019/3/10.
//

#ifndef CPP_STL_HW1_SORTITERATOR_H
#define CPP_STL_HW1_SORTITERATOR_H


#include <string>
#include <vector>
#include "SortString.h"

class SortIterator : public SortString {
private:
    std::vector<std::string> container;
public:
    void input() override;

    void sort() override;

    void output() override;
};

class LineIterator : public std::iterator<std::input_iterator_tag, std::string> {
private:
    std::istream *istream;
    std::string line;
    bool isAtEnd;

    void read() {
        if (*istream) std::getline(*istream, line);
        isAtEnd = !!(*istream);
    }

public:
    LineIterator();

    explicit LineIterator(std::istream &);

    const std::string &operator*() const;

    const std::string *operator->() const;

    LineIterator operator++();

    const LineIterator operator++(int);

    bool operator==(const LineIterator &) const;

    bool operator!=(const LineIterator &) const;
};

#endif //CPP_STL_HW1_SORTITERATOR_H
