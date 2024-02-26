/*Write a program using functions. Create 2 functions to calculate the area and
perimeter of a rectangle, and the functions should return values. Pass sides of
the rectangle as arguments to function. Call functions and print results in
console. No need to take user inputs, just write down the values of sides in the
code.*/
#include <iostream>

using namespace std;

double Plosh(double a, double b) { return a * b; }

double Perim(double a, double b) { return 2 * (a + b); }

int main() {
    double a = 5.0;
    double b = 3.0;

    double area = Plosh(a, b);
    cout << "Площадь прямоугольника: " << area << endl;

    double perimeter = Perim(a, b);
    cout << "Периметр прямоугольника: " << perimeter << endl;

    return 0;
}