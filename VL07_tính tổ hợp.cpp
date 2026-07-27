//C++
#include <bits/stdc++.h>
using namespace std;

bool haiso(int n, int k) {
    return (1 <= k && k <= n && n <= 25);
}

unsigned long long tohop(int n, int k) {
    if (k > n - k) k = n - k; // dùng k nhỏ hơn để giảm số phép tính
    unsigned long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;

    if (!haiso(n, k)) {
        return 0;
    }

    cout << tohop(n, k) << endl;
    return 0;
}
