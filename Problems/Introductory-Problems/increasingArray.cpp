#include "template.hpp"

int main()
{
    int n;
    std::cin >> n;
    int prev = 0;
    ll res = 0;
    FOR1(i, n)
    {
        int x; std::cin >> x;
        if(x < prev)
            res += (prev - x);
        else 
            prev = x;
    }

    std::cout << res;

    return 0;
}