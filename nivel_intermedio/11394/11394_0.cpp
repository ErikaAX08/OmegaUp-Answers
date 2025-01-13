#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int h, s;
    std::cin >> h >> s;

    double salario_total = 0;

    if (h <= 40)
    {
        salario_total = h * s;
    }
    else if (h <= 50)
    {
        salario_total = 40 * s + (h - 40) * s * 1.5;
    }
    else
    {
        salario_total = 40 * s + 10 * s * 1.5 + (h - 50) * s * 2;
    }

    std::cout << salario_total << '\n';
    return 0;
}
