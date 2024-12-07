#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 1;
    while (n <= 30) {
        int d = false;
        cout << "n = " << n << ": ";

        int x = 1;
        while (x <= 30) {
            int y = x;
            while (y <= 30) {
                if (x * x + y * y == n) {
                    if (d) cout << ", ";
                    cout << "(" << x << ", " << y << ")";
                    d = true;
                }
                ++y;
            }
            ++x;
        }

        if (!d) cout << "немає рішень";
        cout << endl;

        ++n;
    }
}
