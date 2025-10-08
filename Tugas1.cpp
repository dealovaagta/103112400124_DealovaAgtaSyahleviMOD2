#include <iostream>
using namespace std;

int main() {
    string nama[5];
    float nilai[5][3], rata2[5];
    int terbaik = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Nama mahasiswa ke-" << i + 1 << ": ";
        cin >> nama[i];
        float total = 0;
        for (int j = 0; j < 3; j++) {
            cout << "  Nilai " << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
        rata2[i] = total / 3;
        if (rata2[i] > rata2[terbaik]) terbaik = i;
    }

    cout << "\nNama\tNilai1\tNilai2\tNilai3\tRata-rata\tKeterangan\n";
    for (int i = 0; i < 5; i++) {
        cout << nama[i] << "\t";
        for (int j = 0; j < 3; j++) cout << nilai[i][j] << "\t";
        cout << rata2[i] << "\t";
        if (i == terbaik) cout << "          Terbaik   ";
        cout << endl;
    }
}
