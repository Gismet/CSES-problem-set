#include "template.hpp"

int main()
{
    ll n;
    std::cin >> n;
    while(n > 1)
    {
        std::cout << n << " ";
        n = (n & 1 ? 3 * n + 1 : n / 2);
    }
    std::cout << "1";


    return 0;
}