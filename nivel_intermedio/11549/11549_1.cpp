#include <iostream>

/*

VERSION OPTIMIZADA

*/

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
    {
        int a, b, n;
        std::cin >> a >> b >> n;

        switch (n % 3)
        {
        case 0:
            std::cout << a;
            break;
        case 1:
            std::cout << b;
            break;
        default:
            std::cout << (a ^ b);
        }
        std::cout << '\n';
    }

    return 0;
}