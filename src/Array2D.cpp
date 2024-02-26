/*Создать 2Д массив, заполнить его элементами и вывести*/
#include <iostream>

using namespace std;

int main() {
    int array2D[3][5];

    cout << "Введите элементы 2Д масива 5x5: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 5; column++) {
            cin >> array2D[row][column];
        }
    }

    cout << "Элементы 2Д масива: " << endl;
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 5; column++) {
            cout << array2D[row][column] << " ";
        }
        cout << endl;
    }
}