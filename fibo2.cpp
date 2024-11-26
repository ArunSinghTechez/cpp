#include <iostream>
using namespace std;

void fibo(int num1, int num2, int n);

int main() {
    int number1 = 0;
    int number2 = 1;

    int n;
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;

    cout << number1 << "\t";
    cout << number2 << "\t";

    fibo(number1, number2, n - 2);

    return 0;
}

void fibo(int num1, int num2, int n) {
    if (n <= 0) {
        return; // Base case: stop when no more terms are needed
    }

    int nextFibo = num1 + num2;
    cout << nextFibo << "\t";

    // Update and continue with the next Fibonacci term
    fibo(num2, nextFibo, n - 1);
}
