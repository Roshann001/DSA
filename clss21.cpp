#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // upper part
    for (int i = 1; i <= n; i++) {

        // spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // numbers 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    // lower part
    for (int i = n - 1; i >= 1; i--) {

        // spaces
        for (int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        // numbers 1 to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
