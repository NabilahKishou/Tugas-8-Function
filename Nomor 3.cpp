#include <iostream>

using namespace std;

float getRata2 (int lengt);

int main()
{
  int panjang = 0;
  cout << "Masukkan Panjang Fibbonaci = ";
  cin >> panjang;

  cout << "Rata - Rata = " << getRata2(panjang);
}

float getRata2(int length)
{
  int awal = 0, akhir = 1, fibbo = 0, hasil = 0;

  if (length != 0) {
    cout << "1 " << endl;
    hasil += 1;
  }

  for (int i = 1; i < length; i++) {
    fibbo = awal + akhir;
    hasil += fibbo;
    cout << fibbo << endl;

    awal = akhir;
    akhir = fibbo;
  }

  return hasil / length;
}
