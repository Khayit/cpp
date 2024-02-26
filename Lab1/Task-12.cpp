#include <iostream>

using namespace std;

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float mult(float a, float b) { return a * b; }
float divis(float a, float b) { return a / b; }
float calculate(float a, float b, char operation) {
  switch (operation) {
  case '+':
    return add(a, b);
  case '-':
    return subtract(a, b);
  case '*':
    return mult(a, b);
  case '/':
    return divis(a, b);
  default:
    cout << "Не правильная операция!" << endl;
    return 0;
  }
}
int main() {
  float num1, num2;
  char operation;

  cout << "Введите первое число:" << endl;
  cin >> num1;
  cout << "Введите второе число:" << endl;
  cin >> num2;
  cout << "Введите операцию (+, -, *, /):" << endl;
  cin >> operation;

  float result = calculate(num1, num2, operation);
  cout << "Результат: " << result << endl;

  return 0;
}