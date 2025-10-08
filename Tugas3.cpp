#include <iostream>
using namespace std;

// Fungsi untuk menghitung rata-rata
float hitungRata(int array[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++)
        total += array[i];
    return total / n;
}

// Fungsi untuk mencari nilai tertinggi dan terendah
void cariNilai(int array[], int n, int &maks, int &min) {
    maks = min = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maks) maks = array[i];
        if (array[i] < min) min = array[i];
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah siswa: ";
    cin >> N;

    int nilai[N];
    for (int i = 0; i < N; i++) {
        cout << "Nilai siswa ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    float rata2 = hitungRata(nilai, N);
    int maks, min;
    cariNilai(nilai, N, maks, min);

    cout << "\nRata-rata kelas : " << rata2;
    cout << "\nNilai tertinggi : " << maks;
    cout << "\nNilai terendah  : " << min << endl;
}
