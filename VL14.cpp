#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);

    if (a == 0)
        return b;

    if (b == 0)
        return a;

    int ketqua = 1;

    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            ketqua = i;
        }
    }

    return ketqua;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << ucln(a, b);

    return 0;
}
