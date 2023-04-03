#include <iostream>
#include <vector>
#include <algorithm>

// Program to capitalize each charater in a vector of strings
int main() {
    std::vector<std::string> words = {"please", "maintain", "silence!"};
  
    std::transform(words.begin(), words.end(), words.begin(),
                   [](std::string& str) {
                   		std::transform(str.begin(), str.end(), str.begin(), toupper);
                      return str;
                    });

    std::cout << "Someone yelled: ";
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}