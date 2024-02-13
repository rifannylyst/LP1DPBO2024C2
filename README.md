# LP1DPBO2024C2

### Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. ###

Desain Program:

Program ini adalah sebuah aplikasi sederhana yang dibuat untuk mengelola daftar anggota DPR (Dewan Perwakilan Rakyat). Tujuannya adalah menyediakan fungsionalitas yang memungkinkan pengguna untuk menambah, mengubah, dan menghapus anggota DPR, serta menampilkan daftar anggota yang tersimpan.

Penjelasan Alur Kode:

1. Program dimulai dengan inisialisasi objek `DPR`, yang merupakan kelas untuk mengelola anggota DPR.
2. Pengguna kemudian diberikan pilihan menu melalui loop utama program.
3. Saat pengguna memilih opsi dari menu, program akan melakukan operasi sesuai dengan pilihan yang dibuat.
4. Jika pengguna memilih opsi "Tambah anggota DPR":
   - Program akan meminta input ID, nama, bidang, dan partai anggota baru.
   - Data tersebut kemudian digunakan untuk membuat objek `AnggotaDPR`, yang akan ditambahkan ke dalam daftar anggota DPR menggunakan metode `tambah_anggota`.
5. Jika pengguna memilih opsi "Ubah anggota DPR":
   - Program akan meminta input ID anggota yang akan diubah, serta data baru (nama, bidang, dan partai).
   - Melalui metode `ubah_anggota`, program akan mencari anggota dengan ID yang sesuai dan mengubah data anggota tersebut jika ditemukan.
6. Jika pengguna memilih opsi "Hapus anggota DPR":
   - Program akan meminta input ID anggota yang akan dihapus.
   - Melalui metode `hapus_anggota`, program akan mencari anggota dengan ID yang sesuai dan menghapusnya dari daftar jika ditemukan.
7. Jika pengguna memilih opsi "Tampilkan anggota DPR":
   - Program akan menampilkan daftar anggota DPR yang telah tersimpan menggunakan metode `tampilkan_anggota`.
8. Loop utama program akan terus berjalan hingga pengguna memilih opsi "Keluar".
9. Program kemudian akan berakhir.

