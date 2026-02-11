#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;

    // count digits
    int digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // calculate sum of powers
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}