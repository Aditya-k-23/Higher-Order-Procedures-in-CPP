#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

// Program to filter courses taught by Anya
int main() {
    std::vector<std::string> words = {"CSCA08", "CSCC24", "CSCC11", "CSCD84"};
  
    std::vector<std::string> p_words;
    std::copy_if(words.begin(), words.end(), std::back_inserter(p_words),
                 [](const std::string& word) { return word == "CSCC24" || word == "CSCA08"; });

    std::cout << "Courses taught by Anya: ";
    for (const std::string& word : p_words) 
    {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}