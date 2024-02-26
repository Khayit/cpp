#include <iostream>

using namespace std;

int main() {
  int N;
  int sum = 0;

  cout << "Введите целое число N: ";
  cin >> N;

  for (int i = 1; i <= N; i++) {
    sum += i;
  }

  cout << "Сумма всех чисел от 1 до " << N << " = " << sum << endl;

  return 0;
}