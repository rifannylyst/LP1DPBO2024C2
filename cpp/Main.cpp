/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <bits/stdc++.h> 
#include "Anggota.cpp" // Memasukkan definisi kelas Anggota dari file Anggota.cpp

using namespace std; // Menggunakan namespace std untuk menggunakan objek-objek standar dari C++

int main() { // Fungsi utama program
    Menu menu; // Membuat objek menu dari kelas Menu
    int pilih, i = 0; // Variabel untuk menyimpan pilihan menu dan nomor urutan anggota
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
                menu.tambahAnggota(); // Memanggil metode untuk menambah anggota baru
                break;
            case 2:
                menu.ubahAnggota(); // Memanggil metode untuk mengubah data anggota
                break;
            case 3:
                menu.hapusAnggota(); // Memanggil metode untuk menghapus anggota
                break;
            case 4:
                menu.tampilkanAnggota(); // Memanggil metode untuk menampilkan daftar anggota
                break;
            case 5:
                cout << "Exiting...\n"; // Menampilkan pesan bahwa program akan keluar
                break;
            default:
                cout << "Invalid pilih\n"; // Menampilkan pesan kesalahan jika pilihan tidak valid
                break;
        }        

    } while (pilih != 5); // Loop berlanjut hingga pengguna memilih untuk keluar
    
    return 0; // Mengembalikan nilai 0 sebagai penanda program berakhir dengan sukses
}
