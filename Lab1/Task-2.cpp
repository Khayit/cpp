#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    string text;
    cout << "Привет" << endl;
    cin >> text; // Ку

    if (text == "Ку")
    {
        cout << "Что делаешь?" << endl;
        cin >> text; // Отдыхаю

        if (text == "Отдыхаю")
        {
            cout << "Какие планы?" << endl;
            cin >> text; // Никакие

            if (text == "Никакие")
            {
                cout << "Леньтяй" << endl;
            }
        }
    }

    return 0;
}