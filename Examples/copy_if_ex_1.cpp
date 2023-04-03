#include <iostream>
#include <vector>
#include <algorithm>

// Program to filter out even numbers using copy_if

int main() {
    std::vector<int> numbers = {10, 11, 12, 13, 14, 15, 16};
    
    std::vector<int> filtered_numbers;
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(filtered_numbers),
                 [](int i) { return i % 2 == 0; });
    
    std::cout << "The even numbers are: ";
    for (const auto& num : filtered_numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}