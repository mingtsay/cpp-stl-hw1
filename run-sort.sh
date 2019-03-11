#!/bin/bash

mkdir result

# Simple
echo Running: simple

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_1000_100.txt > /dev/null 2> result/result_simple_1000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_1000_500.txt > /dev/null 2> result/result_simple_1000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_1000_1000.txt > /dev/null 2> result/result_simple_1000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_5000_100.txt > /dev/null 2> result/result_simple_5000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_5000_500.txt > /dev/null 2> result/result_simple_5000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_5000_1000.txt > /dev/null 2> result/result_simple_5000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_10000_100.txt > /dev/null 2> result/result_simple_10000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_10000_500.txt > /dev/null 2> result/result_simple_10000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_10000_1000.txt > /dev/null 2> result/result_simple_10000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_50000_100.txt > /dev/null 2> result/result_simple_50000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_50000_500.txt > /dev/null 2> result/result_simple_50000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_50000_1000.txt > /dev/null 2> result/result_simple_50000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_100000_100.txt > /dev/null 2> result/result_simple_100000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_100000_500.txt > /dev/null 2> result/result_simple_100000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_100000_1000.txt > /dev/null 2> result/result_simple_100000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_500000_100.txt > /dev/null 2> result/result_simple_500000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_500000_500.txt > /dev/null 2> result/result_simple_500000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_simple < random_string/random_string_500000_1000.txt > /dev/null 2> result/result_simple_500000_1000.txt

# Iterator
echo Running: iterator

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_1000_100.txt > /dev/null 2> result/result_iterator_1000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_1000_500.txt > /dev/null 2> result/result_iterator_1000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_1000_1000.txt > /dev/null 2> result/result_iterator_1000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_5000_100.txt > /dev/null 2> result/result_iterator_5000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_5000_500.txt > /dev/null 2> result/result_iterator_5000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_5000_1000.txt > /dev/null 2> result/result_iterator_5000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_10000_100.txt > /dev/null 2> result/result_iterator_10000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_10000_500.txt > /dev/null 2> result/result_iterator_10000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_10000_1000.txt > /dev/null 2> result/result_iterator_10000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_50000_100.txt > /dev/null 2> result/result_iterator_50000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_50000_500.txt > /dev/null 2> result/result_iterator_50000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_50000_1000.txt > /dev/null 2> result/result_iterator_50000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_100000_100.txt > /dev/null 2> result/result_iterator_100000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_100000_500.txt > /dev/null 2> result/result_iterator_100000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_100000_1000.txt > /dev/null 2> result/result_iterator_100000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_500000_100.txt > /dev/null 2> result/result_iterator_500000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_500000_500.txt > /dev/null 2> result/result_iterator_500000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_iterator < random_string/random_string_500000_1000.txt > /dev/null 2> result/result_iterator_500000_1000.txt

# Alternative
echo Running: alternative

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_1000_100.txt > /dev/null 2> result/result_alternative_1000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_1000_500.txt > /dev/null 2> result/result_alternative_1000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_1000_1000.txt > /dev/null 2> result/result_alternative_1000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_5000_100.txt > /dev/null 2> result/result_alternative_5000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_5000_500.txt > /dev/null 2> result/result_alternative_5000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_5000_1000.txt > /dev/null 2> result/result_alternative_5000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_10000_100.txt > /dev/null 2> result/result_alternative_10000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_10000_500.txt > /dev/null 2> result/result_alternative_10000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_10000_1000.txt > /dev/null 2> result/result_alternative_10000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_50000_100.txt > /dev/null 2> result/result_alternative_50000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_50000_500.txt > /dev/null 2> result/result_alternative_50000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_50000_1000.txt > /dev/null 2> result/result_alternative_50000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_100000_100.txt > /dev/null 2> result/result_alternative_100000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_100000_500.txt > /dev/null 2> result/result_alternative_100000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_100000_1000.txt > /dev/null 2> result/result_alternative_100000_1000.txt

cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_500000_100.txt > /dev/null 2> result/result_alternative_500000_100.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_500000_500.txt > /dev/null 2> result/result_alternative_500000_500.txt
cmake-build-debug/cpp_stl_hw1_sort_alternative < random_string/random_string_500000_1000.txt > /dev/null 2> result/result_alternative_500000_1000.txt

echo All done.
