#include <iostream>
#include <numeric>
#include <vector>

// Program to calculate the product of numbers using accumulate
int main() {
    std::vector<int> numbers{1, 2, 3, 4, 5};
    int product = std::accumulate(numbers.begin(), numbers.end(), 1, std::multiplies<int>());
    std::cout << "The product of the numbers is: " << product << std::endl;
    return 0;
}