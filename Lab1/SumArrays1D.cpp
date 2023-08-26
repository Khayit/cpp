/*Найти сумму 2х 1Д массивов*/
#include <iostream>

using namespace std;

int main()
{
    int array1[5], array2[5];

    cout << "Введите элементы массива1: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array1[i];
    }
    cout << "Элементы массива1: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array1[i] << " " << endl;
    }

    cout << "Введите элементы массива2: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array2[i];
    }
    cout << "Элементы массива2: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array2[i] << " " << endl;
    }
    int SumArrays[5];
    for (int i = 0; i < 5; i++)
    {
        SumArrays[i] = array1[i] + array2[i];
    }

    cout << "Сумма массивов: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << SumArrays[i] << " ";
    }
    cout << endl;
}