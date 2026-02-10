#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // first row
    for(int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    // upper curve
    for(int i = 1; i <= n/2; i++) {
        for(int sp = 0; sp < i; sp++) {
            cout << "  ";
        }
        for(int st = 0; st < n - 3*i; st++) {
            cout << "* ";
        }
        cout << endl;
    }

    // lower curve
    for(int i = n/2 - 1; i >= 1; i--) {
        for(int sp = 0; sp < i; sp++) {
            cout << "  ";
        }
        for(int st = 0; st < n - 2*i; st++) {
            cout << "* ";
        }
        cout << endl;
    }

    // last row
    for(int i = 0; i < n; i++) {
        cout << "* ";
    }

    return 0;
}