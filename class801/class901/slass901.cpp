#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {

        // Left triangle
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Middle spaces
        int spaces = 2 * (n - i);
        for(int s = 1; s <= spaces; s++) {
            cout << "  ";
        }

        // Right triangle
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}