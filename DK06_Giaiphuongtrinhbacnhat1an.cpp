//C++
#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    if (a != 0) {
        double x = -b / a;
        cout << fixed << setprecision(2) << x;
    } else if (a == 0 && b != 0) {
        cout << "NO";  // vô nghiệm
    } else if (a == 0 && b == 0) {
        cout << "WOW"; // vô số nghiệm
    }

    return 0;
}
