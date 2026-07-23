//C++
#include <bits/stdc++.h>
using namespace std;

double tongphanso(int n) {
    double sum = 0.0;
    for (int i = 2; i <= n; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(4) << tongphanso(n);
    return 0;
}
