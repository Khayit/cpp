#include <iostream>

#include <string>

using namespace std;

void addEmployee(string* names, int* ages, float* salaries, int index) {
    cout << "Введите имя сотрудника: ";
    cin >> names[index];
    cout << "Введите возраст сотрудника: ";
    cin >> ages[index];
    cout << "Введите зарплату сотрудника: ";
    cin >> salaries[index];
}

void printEmployee(const string& name, int age, float salary) {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << endl;
    cout << "Зарплата: " << salary << "$" << endl;
}

void printAllEmployees(const string* names, const int* ages, const float* salaries, int count) {
    for (int i = 0; i < count; i++) {
        cout << "Сотрудник #" << i+1 << ":" << endl;
        printEmployee(names[i], ages[i], salaries[i]);
        cout << endl;
    }
}

int main() {

setlocale(LC_ALL, "RU");

    const int maxEmployees = 100;
    string names[maxEmployees];
    int ages[maxEmployees];
    float salaries[maxEmployees];

    int count;
    cout << "Введите количество сотрудников: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        addEmployee(names, ages, salaries, i);
    }

    cout << "Все сотрудники:" << endl;
    printAllEmployees(names, ages, salaries, count);

    system("pause");
    return 0;
}