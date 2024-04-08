#include <iostream>
#include <string>
using namespace std;

double Power2(double A, int N) {
    double result = 1;

    if (N > 0) {
        for (int i = 0; i < N; i++) {
            result *= A;
        }
    }
    else if (N < 0) {
        N = -N;
        for (int i = 0; i < N; i++) {
            result /= A;
        }
    }
    else if (A == 0 && N == 0) {
        result = 0;
    }

    return result;
}

int main() {
    system("chcp 1251");
    double A;
    int N;
    char input[1000];

    cout << "Введите число A: ";
    while (true) {
        cin.getline(input, sizeof(input));
        bool validInput = true;
        for (unsigned int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i]) && input[i] != '.' && input[i] != '-') {
                validInput = false;
                break;
            }
        }
        if (validInput) {
            A = stod(input);
            break;
        }
        cout << "Ошибка! Введите число A: ";
    }

    cout << "Введите степень N: ";
    while (true) {
        cin.getline(input, sizeof(input));
        bool validInput = true;
        for (unsigned int i = 0; i < strlen(input); i++) {
            if (!isdigit(input[i]) && input[i] != '-') {
                validInput = false;
                break;
            }
        }
        if (validInput) {
            N = stoi(input);
            break;
        }
        cout << "Ошибка! Введите целое число N: ";
    }

    double result = Power2(A, N);

    std::cout << "Результат: " << result << std::endl;

    return 0;
}
