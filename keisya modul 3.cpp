#include <iostream>
using namespace std;
int main()
{
    int hargaBarang, diskonPersen;
    cout << "Masukkan\n";
    cout << "Harga barang (Rp) = ";
    cin >> hargaBarang;
    cout << "Diskon barang (%) = ";
    cin >> diskonPersen;

    // Proses hitung diskon
    int jumlahDiskon = hargaBarang * diskonPersen / 100;
    int hargaSetelahDiskon = hargaBarang - jumlahDiskon;

    // Output hasil
    cout << "\nHasil\n";
    cout << "Jumlah diskon        = Rp " << jumlahDiskon << endl;
    cout << "Harga Setelah Diskon = Rp " << hargaSetelahDiskon << endl;

    return 0;
}