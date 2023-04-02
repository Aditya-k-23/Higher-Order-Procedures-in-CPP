#include <iostream>
#include <vector>

int main()
{
    std::vector<int> my_vector = {1, 2, 3, 4, 5};

    auto print = [](const std::vector<int>& vec)
    {
        for(const auto& number : vec){
            std::cout << number << std::endl;
        }
    };

    print(my_vector);

    return 0;
}