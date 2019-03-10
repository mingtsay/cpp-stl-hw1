//
// Created by mt on 2019/3/10.
//

#ifndef CPP_STL_HW1_MAIN_SORT_H
#define CPP_STL_HW1_MAIN_SORT_H

#ifdef SORT_SIMPLE

#include "SortSimple.h"

SortSimple sortString;

#endif //SORT_SIMPLE

#ifdef SORT_ITERATOR

#include "SortIterator.h"

SortIterator sortString;

#endif//SORT_ITERATOR

#ifdef SORT_ALTERNATIVE

#include "SortAlternative.h"

SortAlternative sortString;

#endif//SORT_ALTERNATIVE

#endif //CPP_STL_HW1_MAIN_SORT_H
