#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    while (t--)
    {
        int a, b, n = 0;
        cin >> a >> b >> n;

        int result;
        if (n % 3 == 0)
            result = a;
        else if (n % 3 == 1)
            result = b;
        else
            result = a ^ b;

        cout << result << endl;
    }

    return 0;
}