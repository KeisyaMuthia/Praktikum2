#include <iostream>
using namespace std;
int main()
{
	int nilai;
	char mutu;
	string keterangan;

	cout << "=== Program Penentuan Nilai Mutu ===" << endl;
	cout << "Masukkan nilai angka : ";
	cin >> nilai;
	
	if (nilai > 89) {
		mutu = 'A';
		keterangan = "Naik Kelas";
	}
	else if (nilai > 80 && nilai <= 89) {
		mutu = 'B';
		keterangan = "Naik Kelas";
	}
	else if (nilai > 70 && nilai <= 80) {
		mutu = 'C';
		keterangan = "Naik Kelas";
	}
	else if (nilai > 60 && nilai <= 70) {
		mutu = 'D';
		keterangan = "Tinggal Kelas";
	}
	else {
		mutu = 'E';
		keterangan = "Tinggal Kelas";
	}

	cout << "\nHasil" << endl;
	cout << "Nilai : " << mutu << endl;
	cout << "Keterangan : " << keterangan << endl;

	return 0;
}