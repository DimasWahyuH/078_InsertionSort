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

void BubbleSortArray() {
	int pass = 1;
	do {
		for (int j = 0; j <= n - 1 - pass; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;

	} while (pass <= n - 1);
}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Masukkan Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << "Jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main() {

	input();
	BubbleSortArray();
	display();
	system("pause");

}

 
