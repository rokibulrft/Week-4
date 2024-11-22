#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, b, num = 0, i, d;
    cin >> n >> b;
    if (n == 0)
    {
        printf("num=0");
    }
    i = n;
    while (i != 0)
    {
        d = i % b;
        if (d < 10)
        {
            cout << d;
        }
        else
        {
            printf("%c", d + 'A' - 10);
        }
        i = i / b;
    }
}