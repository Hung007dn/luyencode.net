//C++
#include <bits/stdc++.h>
using namespace std;

bool sohoanhao(long long n) {
    long long tong = 0;

    for (long long i = 1; i < n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    return tong == n;
}

int main() {
    long long n;
    cin >> n;

    if (sohoanhao(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
