#include <iostream>
#include <limits>

using namespace std;

int SumRange(int A, int B) {
    if (A > B)
        return 0;
    int sum = 0;
    for (int i = A; i <= B; ++i)
        sum += i;
    return sum;
}

int main() {
    int A, B, C;
    cout << "Enter A: ";
    while (!(cin >> A)) {
        cout << "Incorrect input. Please try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter B: ";
    while (!(cin >> B)) {
        cout << "Incorrect input. Please try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Enter C: ";
    while (!(cin >> C)) {
        cout << "Incorrect input. Please try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Sum from A to B is " << SumRange(A, B) << '\n';
    cout << "Sum from B to C is " << SumRange(B, C) << '\n';
    return 0;
}