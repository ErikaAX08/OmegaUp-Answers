#include <iostream>
#define N 10

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int pos[N];
    int neg[N];
    int con[N];

    for (int i = 0; i < N; i++)
    {
        pos[i] = 0;
        neg[i] = 0;
        con[i] = 0;
    }

    string numero = "";
    int num = 0;
    while (n--)
    {
        cin >> numero;
        num = numero[1] - '0';
        
        if (numero[0] == '+')
        {
            pos[num]++;
        } else
        {
            neg[num]++;
        }
        con[num]++;        
    }
    
    num = 0;
    for (int i = 0; i < N; i++)
    {
        if (con[i] > con[num])
        {
            num = i;
        }
    }
    
    cout << num << endl;
    cout << pos[num] << " " << neg[num] << endl;

    return 0;
}
