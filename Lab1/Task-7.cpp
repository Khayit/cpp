#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int num = 2;

  while (num <= 100) {
    sum += num;
    num += 2;
  }

  cout << "Сумма четных чисел от 2 до 100: " << sum << endl;

  return 0;
}