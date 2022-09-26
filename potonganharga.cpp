#include <stdio.h>

#include <conio.h>

#include <iostream.h>

using namespace std;

int main()

{

  cout << "##  Program C++ Diskon Potongan Harga  ##" << endl;

  cout << "=========================================" << endl;

  cout << endl;

  int total_belanja, harga_akhir;

  cout << "Total Belanja: Rp.";

  cin >> total_belanja;

  cout << endl;

  if ((total_belanja >= 100000) && (total_belanja < 500000)) {

    harga_akhir = total_belanja - (0.1*total_belanja);

    cout << "Selamat, anda mendapat diskon 10%" << endl;

  }

  else if ((total_belanja >= 500000) && (total_belanja < 1000000)) {

    harga_akhir = total_belanja - (0.2*total_belanja);

    cout << "Selamat, anda mendapat diskon 20%" << endl;

  }

  else if (total_belanja >= 1000000) {

    harga_akhir = total_belanja - (0.3*total_belanja);

    cout << "Selamat, anda mendapat diskon 30%" << endl;

  } 

  else {

    harga_akhir = total_belanja;

  }

  cout << "Total bayar: Rp." << harga_akhir << endl;

  return 0;

}kami
