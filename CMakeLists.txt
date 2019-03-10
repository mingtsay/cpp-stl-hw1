cmake_minimum_required(VERSION 3.13)
project(cpp_stl_hw1)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_stl_hw1_random main_random.cpp RandomString.cpp RandomString.h)

add_executable(cpp_stl_hw1_sort_simple main_sort.cpp SortString.h SortSimple.cpp SortSimple.h main_sort.h)
add_executable(cpp_stl_hw1_sort_iterator main_sort.cpp SortString.h SortIterator.cpp SortIterator.h main_sort.h)
add_executable(cpp_stl_hw1_sort_alternative main_sort.cpp SortString.h SortAlternative.cpp SortAlternative.h main_sort.h)

target_compile_definitions(cpp_stl_hw1_sort_simple PRIVATE SORT_SIMPLE)
target_compile_definitions(cpp_stl_hw1_sort_iterator PRIVATE SORT_ITERATOR)
target_compile_definitions(cpp_stl_hw1_sort_alternative PRIVATE SORT_ALTERNATIVE CHARACTER_TABLE_CREATION)
