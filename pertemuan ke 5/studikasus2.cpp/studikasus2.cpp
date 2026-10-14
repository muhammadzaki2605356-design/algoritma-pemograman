#include <iostream>
using namespace std;

int main() {
    int lanjut = 1;

    while (lanjut == 1) {
        int totalHadir = 0;
        int hadir;

        for (int hari = 1; hari <= 5; hari++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << hari
                 << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> hadir;

            totalHadir += hadir;
        }

        int persentase = (totalHadir * 100) / 5;

        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        if (persentase >= 75) {
            cout << "Status Kehadiran: Baik" << endl;
        }
        else if (persentase >= 50) {
            cout << "Status Kehadiran: Cukup" << endl;
        }
        else if (persentase <= 50) {  
            cout << "Status Kehadiran: Kurang" << endl;
        }
       
        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? "
             << "(1 untuk ya, selain itu untuk tidak): ";
        cin >> lanjut;
    }

    return 0;
}