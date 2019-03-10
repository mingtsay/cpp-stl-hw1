//
// Created by mt on 2019/3/10.
//

#include <iostream>
#include <algorithm>
#include "SortAlternative.h"

void SortAlternative::input() {
    char ch;
    while (std::cin.get(ch)) {
        string_table.push_back(ch);
    }
}

void SortAlternative::createCharTable() {
    auto first = string_table.begin();
    while (first != string_table.end()) {
        auto next = find(first, string_table.end(), '\n');
        if (next != string_table.end()) ++next;
        lines.emplace_back(first, next);
        first = next;
    }
}

void SortAlternative::sort() {
    std::sort(lines.begin(), lines.end(), StringTableCompare());
}

void SortAlternative::output() {
    std::for_each(lines.begin(), lines.end(), StringTablePrint(std::cout));
}

bool StringTableCompare::operator()(const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &x,
                                    const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &y) const {
    return std::lexicographical_compare(x.first, x.second, y.first, y.second);
}

StringTablePrint::StringTablePrint(std::ostream &s) : ostream(s) {}

void StringTablePrint::operator()(const std::pair<std::vector<char>::iterator, std::vector<char>::iterator> &s) const {
    std::copy(s.first, s.second, std::ostreambuf_iterator<char>(std::cout));
}
