/*переделать калькулятор на template T*/
#include <iostream>

using namespace std;

template <class T> T calculate(T a, T b, char operation);

template <class T> T add(T a, T b);

template <class T> T sub(T a, T b);

template <class T> T mult(T a, T b);

template <class T> T divis(T a, T b);

int main() {
  string text;
  cout << "Выберите тип данных (int или float):" << endl;
  cin >> text;

  if (text == "float") {
    float a, b;
    char operation;
    cout << "Введите первое число:" << endl;
    cin >> a;

    cout << "Введите второе число:" << endl;
    cin >> b;

    cout << "Введите операцию (+, -, *, /):" << endl;
    cin >> operation;

    float result = calculate(a, b, operation);
    cout << "Результат: " << result << endl;
  } else if (text == "int") {
    int a, b;
    char operation;
    cout << "Введите первое число:" << endl;
    cin >> a;

    cout << "Введите второе число:" << endl;
    cin >> b;

    cout << "Введите операцию (+, -, *, /):" << endl;
    cin >> operation;

    int result = calculate(a, b, operation);
    cout << "Результат: " << result << endl;
  } else {
    cout << "Что-то пошло не так!" << endl;
  }

  return 0;
}

template <class T> T calculate(T a, T b, char operation) {
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
    cout << "Неправильная операция" << endl;
    return 0;
  }
}

template <class T> T add(T a, T b) { return a + b; }

template <class T> T sub(T a, T b) { return a - b; }

template <class T> T mult(T a, T b) { return a * b; }

template <class T> T divis(T a, T b) { return a / b; }