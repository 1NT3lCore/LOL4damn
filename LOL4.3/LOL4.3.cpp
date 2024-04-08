#include <iostream>

using namespace std;

int SumDigits(int N) {
    if (N == 0)
        return 0;
    return N % 10 + SumDigits(N / 10);
}

int main() {
    int N;
    cout << "Enter a positive integer: ";
    while (!(cin >> N) || N <= 0) {
        cout << "Incorrect input. Please try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Sum of digits: " << SumDigits(N) << '\n';
    return 0;
}