#include <bits/stdc++.h>
using namespace std;

int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int du = a % b;
        a = b;
        b = du;
    }

    return a;
}

int BCNN(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }

    return abs(a / UCLN(a, b) * b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << BCNN(a, b);

    return 0;
}
