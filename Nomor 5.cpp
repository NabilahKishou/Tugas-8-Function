#include <iostream>

using namespace std;

bool checkAngka(int Angka);

int main()
{
  int Angka = 0;

  cout << "Masukkan Angka = ";
  cin >> Angka;

  if (checkAngka(Angka)) {
    cout << "Angka ini Perfect" << endl;
  } else {
    cout << "Angka ini bukan Perfect" << endl;
  }
}

bool checkAngka(int Angka)
{
  int hasil = 0;
  bool status = false;

  for (int i = 1; i < Angka; i++) {
    hasil += i;

    if (hasil == Angka) {
      status = true;
      break;
    }
  }

  return status;
}
