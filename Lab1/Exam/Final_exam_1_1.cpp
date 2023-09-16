/*Get the age and membership_status as user input. membership_status can be only
Y or y . So, if age is bigger or equal to 18 and if the user is a member of our
shop, we provide 10% discount, else we charge fully.*/
#include <iostream>
using namespace std;

int main()
{
    int age;
    char membership_status;

    cout << "Введите ваш возраст: ";
    cin >> age;

    cout << "Вы являетесь пользователем нашнго магазина? (Y/N): ";
    cin >> membership_status;

    if (age >= 18 && (membership_status == 'Y' || membership_status == 'y'))
    {
        cout << "Вы имеете скидку на 10%. " << endl;
    }
    else
    {
        cout << "С вас берется полная стоимость. " << endl;
    }

    return 0;
}