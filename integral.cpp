#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout << "Welcome to the integral calculator. Please enter the value of n: ";
    cin >> n;

    double z = 1 / (n + 1); // Calculating the actual value of the integral

    cout << "How much precision do you want? (Higher the number, higher the precision): ";
    int t;
    cin >> t; // Number of terms

    double s = 0;
    double step = 1.0 / t; // Calculate the step size

    double x = 0;
    while (x <= 1) {
        s += pow(x, n) * step; // Calculate the value of the integral by adding each value of x * step to the sum
        x += step; // Increment x by the step size
    }

    cout << "The calculated value of the integral is " << s << endl;
    cout << "Error is " << abs((z - s) / z) * 100 << "%"; // Calculate the error

    return 0;
}
