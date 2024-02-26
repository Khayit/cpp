#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Введите целое число N: ";
    cin >> N;
    cout << "Четное чисел от 1 до " << N << endl;

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
    }

    return 0;
}