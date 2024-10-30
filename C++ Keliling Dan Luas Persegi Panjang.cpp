#include <iostream>

using namespace std;

int main() {
	
	float panjang,lebar,keliling,luas;
	
	cout << "Contoh Program Perhitungan Persegi Panjang by Jagoan Kode\n";
	
	cout << "============================================================" << endl;
	
	cout << "Masukkan Panjang  = ";
	cin >> panjang;
	
	cout << "Masukkan Lebar = ";
	cin >> lebar;
	
	keliling = 2 * (panjang + lebar);
	luas = panjang * lebar;
	
	cout << "Keliling Persegi Panjang Adalah " << keliling << endl;
	cout << "Luas Persegi Panjang Adalah " << luas << endl;
	
}
