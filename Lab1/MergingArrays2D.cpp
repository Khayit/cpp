/*Прибавить 2 2Д массивов - Merging*/
#include <iostream>
using namespace std;

int main()
{
    int array2D1[2][2] = {{1, 2},{1, 2}};
    int array2D2[2][2] = {{2, 3},{2, 3}};
    int twoArrays2DSum[4][4];
    int index = 0;
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            twoArrays2DSum[index][index] = array2D1[i][j];
            index++;
        }
        index-=2;
    }
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            twoArrays2DSum[index][index] = array2D2[i][j];
            index++;
        }
        index-=2;
    }
    
    cout << "Сумма 2х массивов 2Д: " << endl;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << twoArrays2DSum[i][j] << " " << endl;
        }
    }
    return 0;
}