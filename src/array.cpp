/*Создать два массива, наполнить их значениями, вывести их а также объединить их
и вывести значения. После объединения (merging) удалить пару элементов оттуда*/
#include <iostream>

using namespace std;

int main() {
    int temps1[10], temps2[10], twoArraysSum[20], index = 0;
    int position;

    cout << "Введите элементы первого массива: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> temps1[i];
    }

    cout << "Первый массив: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << temps1[i] << endl;
    }

    cout << "Введите элементы второго массива: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> temps2[i];
    }

    cout << "Второй массив: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << temps2[i] << endl;
    }

    for (int i = 0; i < 10; i++) {
        twoArraysSum[index] = temps1[i];
        index++;
    }

    for (int i = 0; i < 10; i++) {
        twoArraysSum[index] = temps2[i];
        index++;
    }

    cout << "Сумма 2-х массивов " << endl;
    for (int i = 0; i < 20; i++) {
        cout << twoArraysSum[i] << endl;
    }

    cout << "Удаление элемента массива: " << endl;
    cin >> position;
    for (int i = 0; i < 20; i++) {
        twoArraysSum[position] = 0;
        cout << twoArraysSum[i] << endl;
    }
    return 0;
}