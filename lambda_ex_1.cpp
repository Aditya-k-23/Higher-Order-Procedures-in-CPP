#include <iostream>

int main()
{
    int x = 10;
    int y = 12;

    auto add = [](int a, int b) -> int {
        return a + b;
    };

    std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;

    return 0;
}
