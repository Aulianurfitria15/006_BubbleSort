
#include <iostream>
using namespace std;

int arr[20];
int n;


void input() {

	while (true) {
		cout << "Masukan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}

	cout << endl;
	cout << "=============" << endl;
	cout << "Masukan Elemen Array" << endl;

}


