#include <iostream>

using namespace std;

int main() {
  double zarplata;
  double nalog = 0.0;

  cout << "Введите зарплату: $";
  cin >> zarplata;

  if (zarplata < 1500) {
    nalog = 0.0;
  } else if (zarplata >= 1501 && zarplata < 3000) {
    nalog = zarplata * 0.1;
  } else if (zarplata >= 3001 && zarplata < 5000) {
    nalog = zarplata * 0.2;
  } else if (zarplata >= 5000) {
    nalog = zarplata * 0.3;
  }

  cout << "Налог: $" << nalog << endl;

  return 0;
}