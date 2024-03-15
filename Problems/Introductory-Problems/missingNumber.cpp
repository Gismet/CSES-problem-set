#include "template.hpp"


int main()
{
    int n;
    std::cin >> n;
    vv<int> a(n, INT_MAX);
    for(int i = 0; i < n - 1; i++)
        std::cin >> a[i];
    
    SORT(a);

    FOR(i, 0, (int)a.size())
    {
        if(i + 1 != a[i])
        {
            std::cout << i + 1;
            break;
        }
    }


    return 0;
}