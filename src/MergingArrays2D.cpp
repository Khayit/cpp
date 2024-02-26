/*Прибавить 2 2Д массивов - Merging*/
#include <iostream>
using namespace std;

int main() {
    int array2D1[2][2] = {{1, 2}, {1, 2}};
    int array2D2[2][2] = {{3, 4}, {3, 4}};
    int twoArrays2DSum[4][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            twoArrays2DSum[i][j] = array2D1[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            twoArrays2DSum[i + 2][j] = array2D2[i][j];
        }
    }

    cout << "Сумма 2х массивов 2Д: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << twoArrays2DSum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}