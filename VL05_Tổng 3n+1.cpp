//C++
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int S = 0;
    for (int i = 1; i <= 3 * n + 1; i++) {
        if (i % 2 == 0) {
            S -= i;
        } else {
            S += i;
        }
    }
    cout << S << endl;
    return 0;
}

