#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Результат: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Результат: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Результат: " << num1 * num2 << endl;
        break;
    case '/':
        cout << "Результат: " << num1 / num2 << endl;
        break;
    default:
        cout << "Ошибка: неверная операция!" << endl;
    }

    return 0;
}