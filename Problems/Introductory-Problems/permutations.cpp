#include "template.hpp"

/*
* no solution for when n = 2 and n = 3
* Otherwise, Write a sequence of odd numbers after a sequence of even numbers or vise versa
*/

int main()
{
    int n;
    std::cin >> n;
    if (n == 2 || n == 3)
        std::cout << "NO SOLUTION";
    else
    {
        for (int i = n - 1; i > 0; i -= 2)
            std::cout << i << " ";
        for (int i = n; i > 0; i -= 2)
            std::cout << i << " ";
    }

    return 0;
}