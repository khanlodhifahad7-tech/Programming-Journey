#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printSeries(int n, int i = 0) {
    if (i == n) {
        return;
    }

    cout << fibonacci(i) << " ";

    printSeries(n, i + 1);
}

int main() {
    int a;

    cout << "Enter number of terms: ";
    cin >> a;

    printSeries(a);

    return 0;
}
