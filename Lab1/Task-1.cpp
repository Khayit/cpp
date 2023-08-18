#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int num1 = 5;                     // Длина прямоугольника
    int num2 = 3;                     // Ширина прямоугольника
    float side = 5, S1, perimeter1;   // квадрат
    float radius = 9, S2, perimeter2; // круг
    float a = 5, b = 3, c = 5;        // стороны треугольника

    int S = num1 * num2;                                                                              // Площадь прямоугольника
    int perimeter = 2 * (num1 + num2);                                                                // Периметр прямоугольника
    S1 = side * side;                                                                                 // вычисляем площадь
    perimeter1 = 4 * side;                                                                            // вычисляем периметр
    S2 = 3.14159 * radius * radius;                                                                   // вычисляем площадь
    perimeter2 = 2 * 3.14159 * radius;                                                                // вычисляем периметр
    float perimeter3 = a + b + c;                                                                     // периметр треугольника
    float poluperimeter = perimeter / 2;                                                              // полу периметер
    float S3 = sqrt(poluperimeter * (poluperimeter - a) * (poluperimeter - b) * (poluperimeter - c)); // Площадь треугольника

    cout << "Площадь прямоугольника " << S << endl;
    cout << "Периметр прямоугольника " << perimeter << endl;
    cout << "Площадь квадрата " << S1 << endl;
    cout << "Периметр квадрата" << perimeter1 << endl;
    cout << "Площадь круга " << S2 << endl;
    cout << "Периметр круга " << perimeter2 << endl;
    cout << "Площадь треугольника " << S3 << endl;
    cout << "Прериметр треугольника " << perimeter3 << endl;

    return 0;
}