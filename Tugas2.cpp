#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int *arr = new int[n]; // pointer ke array dinamis

    // Input nilai
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> *(arr + i); // input via pointer
    }

    // Inisialisasi
    int jumlah = 0, maks = *arr, min = *arr;

    // Proses dengan pointer aritmatika
    for (int *p = arr; p < arr + n; p++) {
        jumlah += *p;
        if (*p > maks) maks = *p;
        if (*p < min) min = *p;
    }

    // Tampilkan hasil
    cout << "\nJumlah = " << jumlah;
    cout << "\nNilai maksimum = " << maks;
    cout << "\nNilai minimum = " << min << endl;

    delete[] arr; // hapus memori dinamis
    return 0;
}
