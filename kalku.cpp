#include <iostream> 
using namespace std; 
int main() { 
	float a, b; 
	int kode;

	menu :
	cout << "Kalkulator Sederhana C++ " << endl; 
	cout << "Pilihan Menu : " << endl; 
	cout << "1.Penjumlahan (+)" << endl; 
	cout << "2.Pengurangan (-)" << endl; 
	cout << "3.Perkalian   (*)" << endl; 
	cout << "4.Pembagian   (/)" << endl; 
	cout << "5.Keluar\n\n";
	cout << "Silahkan masukkan kode menu : ";
	cin >> kode;
	if (kode > 5 || kode < 1){
		cout << "\nKode yang anda masukkan tidak ada \nSilahkan masukkan ulang kode ."; 
		goto menu;
	} else{ 
		if (kode < 5 && kode > 0){
			cout << "Masukkan angka pertama : ";
			cin >> a; 
			cout << "Masukkan angka kedua : ";
			cin >> b;
		}
		if (kode == 1){ 
			cout << "\nHasil penjumlahan dari " << a << " + " << b << " adalah : " << a+b << endl; 
			goto menu;
		} 

		else if (kode == 2){ 
			cout << "\nHasil pengurangan dari " << a << " - " << b << " adalah : " << a-b << endl; 
			goto menu;
		} 

		else if (kode == 3){ 
			cout << "\nHasil perkalian dari " << a << " * " << b << " adalah : " << a*b << endl; 
			goto menu;
		} 

		else if (kode == 4){ 
			cout << "\nHasil pembagian dari " << a << " / " << b << " adalah : " << a/b << endl; 
			goto menu;
		} 

		else if (kode == 5){
			cout << "Program selseai";
		}
	}
	
	cin.get();
	return 0;
} 