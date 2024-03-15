#include <iostream>
using namespace std;
int arr[12];
int n;

void input() { //procedur untuk input
	int d;
	while (true) {
		cout << "Masukan banyaknya elemen pada array : "; // output ke layar
		cin >> n;      // Input dari pengguna
		if (n <= 12)   // Jika n kurang dari atau sama dengan 20
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

void insertionsort() 
{
	int i, temp, j;

	for (i = 1; i <= n - 1; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	
	
	}

}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Masukkan Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
	cout << endl;

}

int main() {
	input();
	insertionsort();
	display();
	system("pause");
	return 0;
}