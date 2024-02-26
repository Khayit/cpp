/*Найти сумму всех элементов 1Д и 2Д Массивов*/
#include <iostream>
using namespace std;

int main() {
  int array1D[5] = {1, 2, 3, 4, 5}; // задаем элементы массива1
  int array2D[3][3] = {
      {1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // задаем элементы массива2
  int SumArray1D = 0;
  int SumArray2D = 0;

  for (int i = 0; i < 5; i++) // Сумма элементов массива 1Д
  {
    SumArray1D += array1D[i];
  }

  for (int i = 0; i < 3; i++) // Сумма элементов массива 2Д
  {
    for (int j = 0; j < 3; j++) {
      SumArray2D += array2D[i][j];
    }
  }
  cout << "Сумма элементов массива 1Д: " << SumArray1D << endl;
  cout << "Сумма элементов массива 2Д: " << SumArray2D << endl;

  return 0;
}