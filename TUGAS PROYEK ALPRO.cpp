#include <iostream>
using namespace std;

struct Buku {
    string judul;
    bool dipinjam;
};

Buku buku[10];
int jumlah = 0;

int main() {
    int pilih;
    
    cout<<"==================================="<<endl;
    cout<<"DAFTAR PEMINJAMAN BUKU PERPUSTAKAAN"<<endl;
	cout<<"==================================="<<endl;

    do {
        cout << "\n1. Tambah Buku\n";
        cout << "2. Tampilkan Buku\n";
        cout << "3. Pinjam Buku\n";
        cout << "4. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cin.ignore();
            cout << "Judul buku: ";
            getline(cin, buku[jumlah].judul);
            buku[jumlah].dipinjam = false;
            jumlah++;
        }

        else if (pilih == 2) {
            for (int i = 0; i < jumlah; i++) {
                cout << i+1 << ". " << buku[i].judul;
                if (buku[i].dipinjam)
                    cout << " (Dipinjam)";
                else
                    cout << " (Tersedia)";
                cout << endl;
            }
        }

        else if (pilih == 3) {
            int no;
            cout << "Nomor buku: ";
            cin >> no;

            if (no >= 1 && no <= jumlah) {
                buku[no-1].dipinjam = true;
                cout << "Buku dipinjam!\n";
            } else {
                cout << "Salah pilih!\n";
            }
        }

    } while (pilih != 4);

    return 0;
}
