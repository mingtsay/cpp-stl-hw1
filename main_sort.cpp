//
// Created by mt on 2019/3/10.
//

#include <iostream>
#include <chrono>
#include "main_sort.h"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long time_total = 0;

    std::cerr << "Program started." << std::endl;

    // Input
    {
        std::cerr << "Running: Input" << std::endl;
        const auto begin = std::chrono::system_clock::now();

        sortString.input();

        const auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now() - begin);

        std::cerr << "Input: " << duration.count() << std::endl;
        time_total += duration.count();
    }

    // Character Table Creation
    #ifdef CHARACTER_TABLE_CREATION
    {
        std::cerr << "Running: Character Table Creation" << std::endl;
        const auto begin = std::chrono::system_clock::now();

        sortString.createCharTable();

        const auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now() - begin);

        std::cerr << "Character Table Creation: " << duration.count() << std::endl;
        time_total += duration.count();
    }
    #endif //CHARACTER_TABLE_CREATION

    // Sorting
    {
        std::cerr << "Running: Sorting" << std::endl;
        const auto begin = std::chrono::system_clock::now();

        sortString.sort();

        const auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now() - begin);

        std::cerr << "Sorting: " << duration.count() << std::endl;
        time_total += duration.count();
    }

    // Output
    {
        std::cerr << "Running: Output" << std::endl;
        const auto begin = std::chrono::system_clock::now();

        sortString.output();

        const auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(
                std::chrono::system_clock::now() - begin);

        std::cerr << "Output: " << duration.count() << std::endl;
        time_total += duration.count();
    }

    // Total
    {
        std::cerr << "Running: Total" << std::endl;
        std::cerr << "Total: " << time_total << std::endl;
    }

    return EXIT_SUCCESS;
}
