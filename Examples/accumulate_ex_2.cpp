#include <iostream>
#include <numeric>
#include <string>
#include <vector>

// Program to create a sentence from strings in C++
int main() {
    std::vector<std::string> words{"CSCC24", " is ", "awesome", "!!\n"};
    std::string sentence = std::accumulate(words.begin(), words.end(), std::string(""));
    std::cout << "The sentence is: " << sentence << std::endl;
    return 0;
}