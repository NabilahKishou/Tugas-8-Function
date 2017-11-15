#include <iostream>

using namespace std;

int getTerbesar(int bil[10], bool status);

int main()
{
  int number[10];

  for (int i = 0; i < 10; i++) {
  	cout<<"Masukkan Angka : "<< endl;
    cin >> number[i];
  }

  cout << "Angka Terkecil = " << getTerbesar(number, false) << endl; // angka terkecil
  cout << "Angka Terbesar = " << getTerbesar(number, true) << endl; // angka terbesar
}

int getTerbesar(int bil[10], bool status)
{
  int besar, kecil;

  for (int i = 0; i < 10; i++) {
    if (i == 0) {
      besar = bil[0];
      kecil = bil[0];
    }

    if (bil[i] > besar) {
      besar = bil[i];
    }
    else if (bil[i] < kecil) {
      kecil = bil[i];
    }
  }

  if (status) { // status == true
    return besar;
  } else { // status == false
    return kecil;
}
}
