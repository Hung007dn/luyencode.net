#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // Mẫu số bằng 0 thì phân số không hợp lệ
    if (b == 0) {
        cout << "INVALID";
        return 0;
    }

    // Đưa dấu âm lên tử số
    if (b < 0) {
        a = -a;
        b = -b;
    }

    // Tìm UCLN của |a| và |b|
    int ucln = __gcd(abs(a), abs(b));

    // Rút gọn phân số
    a /= ucln;
    b /= ucln;

    // Nếu phân số là số nguyên
    if (b == 1) {
        cout << a;
    } else {
        cout << a << " " << b;
    }

    return 0;
}
