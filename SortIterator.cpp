//
// Created by mt on 2019/3/10.
//

#include <algorithm>
#include <iterator>
#include <iostream>
#include "SortIterator.h"

void SortIterator::input() {
    LineIterator it(std::cin);
    LineIterator eof;

    container = std::vector<std::string>(it, eof);
}

void SortIterator::sort() {
    std::sort(container.begin(), container.end());
}

void SortIterator::output() {
    std::copy(container.begin(), container.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
    std::cout.flush();
}

LineIterator::LineIterator() : istream(&std::cin), isAtEnd(false) {}

LineIterator::LineIterator(std::istream &s) : istream(&s) {
    read();
}

const std::string &LineIterator::operator*() const {
    return line;
}

const std::string *LineIterator::operator->() const {
    return &line;
}

LineIterator LineIterator::operator++() {
    read();
    return *this;
}

const LineIterator LineIterator::operator++(int) {
    LineIterator that = *this;
    read();
    return that;
}

bool LineIterator::operator==(const LineIterator &it) const {
    return (istream == it.istream && isAtEnd == it.isAtEnd) || (!isAtEnd && !it.isAtEnd);
}

bool LineIterator::operator!=(const LineIterator &it) const {
    return !(*this == it);
}
