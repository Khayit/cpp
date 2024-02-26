#include <iostream>

using namespace std;

int num(int a, int b);
float num(float a, float b);
float calculate(float a, float b, char operation);
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divis(float a, float b);

int main() {
    string text;
    cout << "Выберите float или int" << endl;
    cin >> text;
    if (text == "float") {
        float a, b;
        char operation;
        cout << "Введите первое число:" << endl;
        cin >> a;

        cout << "Введите второе число:" << endl;
        cin >> b;

        cout << "Введите операцию(+, -, *, /):" << endl;
        cin >> operation;

        float result = calculate(a, b, operation);
        cout << "result " << result << endl;
    } else if (text == "int") {
        int a, b;
        char operation;
        cout << "Введите первое число:" << endl;
        cin >> a;

        cout << "Введите второе число:" << endl;
        cin >> b;

        cout << "Введите операцию(+, -, *, /):" << endl;
        cin >> operation;

        int result = calculate(a, b, operation);
        cout << "result " << result << endl;
    } else {
        cout << "Что то пошло не так!" << endl;
    }

    return 0;
}

int num(int a, int b) { return num(a, b); }
float num(float a, float b) { return num(a, b); }
float calculate(float a, float b, char operation) {
    switch (operation) {
        case '+':
            return add(a, b);
        case '-':
            return sub(a, b);
        case '*':
            return mult(a, b);
        case '/':
            return divis(a, b);
        default:
            cout << "Не правильная опирация" << endl;
            return 0;
    }
}
float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mult(float a, float b) { return a * b; }
float divis(float a, float b) { return a / b; }