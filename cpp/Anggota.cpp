/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <iostream> 
#include <string> // Memasukkan pustaka string standar

using namespace std; // Menggunakan namespace std untuk menggunakan objek-objek standar dari C++

class Anggota { // Mendefinisikan kelas Anggota
private: // Atribut-atribut pribadi kelas
    string id; // ID anggota
    string nama; // Nama anggota
    string namaBidang; // Nama bidang keanggotaan
    string namaPartai; // Nama partai keanggotaan

public: // Metode-metode publik kelas
    // Metode getter dan setter untuk setiap atribut
    string get_id() const { return id; } // Mendapatkan ID anggota
    void set_id(const string& new_id) { id = new_id; } // Mengatur ID anggota
    string get_nama() const { return nama; } // Mendapatkan nama anggota
    void set_nama(const string& new_nama) { nama = new_nama; } // Mengatur nama anggota
    string get_namaBidang() const { return namaBidang; } // Mendapatkan nama bidang keanggotaan
    void set_namaBidang(const string& new_namaBidang) { namaBidang = new_namaBidang; } // Mengatur nama bidang keanggotaan
    string get_namaPartai() const { return namaPartai; } // Mendapatkan nama partai keanggotaan
    void set_namaPartai(const string& new_namaPartai) { namaPartai = new_namaPartai; } // Mengatur nama partai keanggotaan
};

class Menu { // Mendefinisikan kelas Menu
private: // Atribut-atribut pribadi kelas
    list<Anggota> llist; // Daftar anggota

public: // Metode-metode publik kelas
    // Metode untuk menambahkan anggota baru
    void tambahAnggota() {
        string id, nama, namaBidang, namaPartai; // Variabel untuk menyimpan data anggota baru
        cout << "Masukkan ID, Nama, Nama Bidang, Nama Partai yang akan ditambah : "; // Meminta pengguna untuk memasukkan data anggota baru
        cin >> id >> nama >> namaBidang >> namaPartai; // Membaca data anggota baru dari input pengguna

        Anggota temp; // Membuat objek anggota sementara
        temp.set_id(id); // Mengatur ID anggota
        temp.set_nama(nama); // Mengatur nama anggota
        temp.set_namaBidang(namaBidang); // Mengatur nama bidang keanggotaan
        temp.set_namaPartai(namaPartai); // Mengatur nama partai keanggotaan

        llist.push_back(temp); // Menambahkan anggota baru ke dalam daftar anggota
    }

    // Metode untuk mengubah data anggota yang sudah ada
    void ubahAnggota() {
        string target_id; // Variabel untuk menyimpan ID anggota yang akan diubah
        cout << "Masukkan ID Anggota yang akan diubah : "; // Meminta pengguna untuk memasukkan ID anggota yang akan diubah
        cin >> target_id; // Membaca ID anggota yang akan diubah dari input pengguna

        bool found = false; // Variabel untuk menandai apakah ID anggota yang akan diubah ditemukan atau tidak
        for (auto& anggota : llist) { // Melakukan iterasi pada setiap anggota dalam daftar
            if (anggota.get_id() == target_id) { // Memeriksa apakah ID anggota saat ini sama dengan ID target yang akan diubah
                string id, nama, namaBidang, namaPartai; // Variabel untuk menyimpan data anggota yang akan diubah
                cout << "Masukkan ID, Nama, Nama Bidang, Nama Partai " << target_id << " : "; // Meminta pengguna untuk memasukkan data anggota yang baru
                cin >> id >> nama >> namaBidang >> namaPartai; // Membaca data anggota yang baru dari input pengguna

                anggota.set_id(id); // Mengatur ID anggota
                anggota.set_nama(nama); // Mengatur nama anggota
                anggota.set_namaBidang(namaBidang); // Mengatur nama bidang keanggotaan
                anggota.set_namaPartai(namaPartai); // Mengatur nama partai keanggotaan

                found = true; // Menandai bahwa anggota yang akan diubah telah ditemukan
                break; // Keluar dari loop
            }
        }

        if (!found) // Jika anggota yang akan diubah tidak ditemukan
            cout << "Anggota dengan ID " << target_id << " tidak ditemukan!\n"; // Menampilkan pesan kesalahan
    }

    // Metode untuk menghapus anggota
    void hapusAnggota() {
        string target_id; // Variabel untuk menyimpan ID anggota yang akan dihapus
        cout << "Masukkan ID Anggota yang akan dihapus : "; // Meminta pengguna untuk memasukkan ID anggota yang akan dihapus
        cin >> target_id; // Membaca ID anggota yang akan dihapus dari input pengguna

        for (auto it = llist.begin(); it != llist.end(); ) { // Melakukan iterasi pada setiap anggota dalam daftar
            if (it->get_id() == target_id) { // Memeriksa apakah ID anggota saat ini sama dengan ID target yang akan dihapus
                it = llist.erase(it); // Menghapus anggota dari daftar dan menggerakkan iterator ke anggota berikutnya
                cout << "Anggota dengan ID " << target_id << " terhapus.\n"; // Menampilkan pesan konfirmasi
            } else {
                ++it; // Menggerakkan iterator ke anggota berikutnya
            }
        }
    }

    // Metode untuk menampilkan daftar anggota
    void tampilkanAnggota() {
        cout << '\n'; // Mencetak baris kosong
        cout << "Daftar Anggota : " << '\n'; // Mencetak judul daftar anggota
        int i = 0; // Variabel untuk nomor urutan anggota
        for (const auto& anggota : llist) { // Melakukan iterasi pada setiap anggota dalam daftar
            cout << (i + 1) << ". " << anggota.get_id() << " | " << anggota.get_nama() << " | " << anggota.get_namaBidang() << " | " << anggota.get_namaPartai() << '\n'; // Menampilkan data anggota
            i++; // Menambahkan nomor urutan anggota
        }
    }

    // Metode untuk menampilkan menu utama
    void tampilkanMenu() {
        int pilih; // Variabel untuk menyimpan pilihan menu pengguna
        do { // Melakukan loop menu utama
            cout << "\n1. Tambah data Anggota\n"; // Menampilkan opsi untuk menambah anggota baru
            cout << "2. Ubah data Anggota\n"; // Menampilkan opsi untuk mengubah data anggota
            cout << "3. Hapus data Anggota\n"; // Menampilkan opsi untuk menghapus anggota
            cout << "4. Tampilkan data Anggota\n"; // Menampilkan opsi untuk menampilkan daftar anggota
            cout << "5. Exit\n"; // Menampilkan opsi untuk keluar dari program
            cout << "Pilih Opsi : "; // Meminta pengguna untuk memilih opsi
            cin >> pilih; // Membaca pilihan pengguna

            switch (pilih) { // Melakukan seleksi berdasarkan pilihan pengguna
                case 1:
                    tambahAnggota(); // Memanggil metode untuk menambah anggota baru
                    break;
                case 2:
                    ubahAnggota(); // Memanggil metode untuk mengubah data anggota
                    break;
                case 3:
                    hapusAnggota(); // Memanggil metode untuk menghapus anggota
                    break;
                case 4:
                    cout << "Exiting...\n"; // Menampilkan pesan bahwa program akan keluar
                    break;
                default:
                    cout << "Invalid pilih\n"; // Menampilkan pesan kesalahan jika pilihan tidak valid
                    break;
            }

            int i = 0; // Variabel untuk nomor urutan anggota
            for(list<Anggota>::iterator it = llist.begin(); it != llist.end(); it++){ // Melakukan iterasi pada setiap anggota dalam daftar
                cout << (i + 1) << ". " << it->get_id() << " | " << it->get_nama() << " | " << it->get_namaBidang() << " | " << it->get_namaPartai() << '\n'; // Menampilkan data anggota
                i++; // Menambahkan nomor urutan anggota
            }
            tampilkanAnggota(); // Menampilkan daftar anggota

        } while (pilih != 4); // Loop berlanjut hingga pengguna memilih untuk keluar
    }
};
