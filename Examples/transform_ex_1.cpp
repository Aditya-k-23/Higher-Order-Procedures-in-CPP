// C++ program to illustrate std::plus
// by adding the respective elements of 2 arrays
#include <iostream> // std::cout
#include <functional> // std::plus
#include <algorithm> // std::transform
  
int main()
{
    // First array
    int first[] = { 1, 2, 3, 4, 5 };
  
    // Second array
    int second[] = { 10, 20, 30, 40, 50 };
  
    // Result array
    int results[5];
  
    // std::transform applies std::plus to the whole array
    std::transform(first, first + 5, second, results, std::plus<int>());
  
    // Printing the result array
    for (int i = 0; i < 5; i++)
        std::cout << results[i] << "\n  ";
  
    return 0;
}