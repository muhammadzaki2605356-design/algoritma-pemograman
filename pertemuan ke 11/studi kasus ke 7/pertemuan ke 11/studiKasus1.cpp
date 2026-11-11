#include <iostream>

using namespace std;

double jumlahNilai(int* arr, int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + jumlahNilai(arr, n - 1);
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah mahasiswa tidak boleh 0." << endl;
        return 0;
    }

    int* nilai = new int[n];
    int terbesar, terkecil;

    cout << "Masukkan nilai mahasiswa:\n";
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];

        if (i == 0) {
            terbesar = terkecil = nilai[i];
        } else {
            if (nilai[i] > terbesar) terbesar = nilai[i];
            if (nilai[i] < terkecil) terkecil = nilai[i];
        }
    }

    double rata_rata = jumlahNilai(nilai, n) / n;

    cout << "\nNilai terbesar: " << terbesar << "\n";
    cout << "Nilai terkecil: " << terkecil << "\n";
    cout << "Rata-rata nilai: " << rata_rata << "\n";

    delete[] nilai; 
    
    return 0;
}