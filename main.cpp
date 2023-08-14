#include <iostream>

using namespace std;

int sum(int a, int b);
int sum(int a, int b, int c);
float sum(float a, float b);

int main()
{
    float a, b;

    cout << "Введите число 1: ";
    cin >> a;

    cout << "Введите число 2: ";
    cin >> b;

    cout << "Введите число 3: ";
    cin >> c;

    cout << sum(a, b) << endl;

    return 0;
}

float sum(float a = 5, float b = 5)
{
    float sum;
    sum = a + b;
    return sum;
}
int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}
int sum(int a, int b, int c)
{
    int sum;
    sum = a + b;
    return sum;
}
