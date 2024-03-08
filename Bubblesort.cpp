#include <iostream>
#include <string>
using namespace std;

int arr[20];    //Deklarasi variabel array a dengan ukuran 20
int n;       // Deklarasi variabel global n untuk menyimpan banyaknya elemen pada array

void input() { //procedur untuk input
	int d;
	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n;      // Input dari pengguna
		if (n <= 20)   // Jika n kurang dari atau sama dengan 20
			break;     // Keluar dari loop
		else {         // Jika n lebih dari 20 
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}
}
