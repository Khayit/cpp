/*Найти сумму 2х 2Д массивов*/
#include <iostream>

using namespace std;

int main() {
    int array2D1[3][3], array2D2[3][3];

    cout << "Введите элементы 2Д массива1: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            cin >> array2D1[row][column];
        }
    }

    cout << "Элементы 2Д массива1: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            cout << array2D1[row][column] << " " << endl;
        }
    }

    cout << "Введите элементы 2Д массива2: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            cin >> array2D2[row][column];
        }
    }

    cout << "Элементы 2Д массива2: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            cout << array2D2[row][column] << " " << endl;
        }
    }
    int SumArrays2D[3][3];
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            SumArrays2D[row][column] = array2D1[row][column] + array2D2[row][column];
        }
    }

    cout << "Сумма 2х 2Д массивов: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            cout << SumArrays2D[row][column] << " ";
        }
        cout << endl;
    }
}