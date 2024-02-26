#include <iostream>

using namespace std;

int main() {
    int age;

    do {
        cout << "введите возраст" << endl;
        cin >> age;
    } while (age <= 18);
    { cout << "Добро пожаловать, вы совершеннолетний!" << endl; }
    return 0;
}