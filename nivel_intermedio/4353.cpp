#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n = 0;
    std::cin >> n;

    std::vector<int> divisores;

    if (n <= 1)
    {
        std::cout << n << '\n';
        return 0;
    }

    for (size_t i = 1; i <= n; i++)
    {
        if (!(n % i))
        {
            divisores.push_back(i);
        }
    }

    std::sort(divisores.begin(), divisores.end(), std::greater<int>());

    for (size_t i = 0; i < divisores.size(); i++)
    {
        std::cout << divisores[i] << '\n';
    }

    return 0;
}