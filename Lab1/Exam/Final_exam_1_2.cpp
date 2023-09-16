/*Write a program with a loop using break and continue.
Lottery game, track number of attempts user makes to guess the number.
Create lotteryNumber and it should be equal to 42. Continue receiving userNumber
until user doesn’t find the lotteryNumber . If user finds lotteryNumber stop the
program and output how many attempts user made.*/
#include <iostream>
using namespace std;

int main()
{
    int lotteryNumber = 42;
    int userNumber;
    int attempts = 0;

    while (true)
    {
        cout << "Введите номер: ";
        cin >> userNumber;

        attempts++;

        if (userNumber == lotteryNumber)
        {
            break;
        }

        cout << "Неправильный номер. Попробуй еще раз" << endl;
    }

    cout << "Вы угодали лоторейный число " << attempts << " Ваши попытки" << endl;

    return 0;
}