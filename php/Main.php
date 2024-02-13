<?php
/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan.Aamiin.
*/

require_once 'AnggotaDPR.php'; // Mengimpor kelas AnggotaDPR dari file AnggotaDPR.php

class DaftarAnggotaDPR { // Membuat kelas DaftarAnggotaDPR
    private $anggotaDPR = []; // Mendefinisikan properti anggotaDPR sebagai array untuk menyimpan anggota DPR

    public function tambahAnggota($anggota){ // Membuat fungsi untuk menambahkan anggota DPR ke dalam daftar
        $this->anggotaDPR[] = $anggota; // Menambahkan anggota DPR baru ke dalam array anggotaDPR
    }

    public function ubahAnggota($id, $anggotaBaru){ // Membuat fungsi untuk mengubah data anggota DPR
        foreach ($this->anggotaDPR as &$anggota) { // Melakukan iterasi melalui array anggotaDPR
            if ($anggota->getId() == $id) { // Jika ID anggota sama dengan ID yang ingin diubah
                $anggota = $anggotaBaru; // Mengganti anggota DPR dengan data anggota yang baru
                break; // Menghentikan iterasi setelah data diubah
            }
        }
    }

    public function hapusAnggota($id){ // Membuat fungsi untuk menghapus anggota DPR dari daftar
        foreach ($this->anggotaDPR as $key => $anggota) { // Melakukan iterasi melalui array anggotaDPR
            if ($anggota->getId() == $id) { // Jika ID anggota sama dengan ID yang ingin dihapus
                unset($this->anggotaDPR[$key]); // Menghapus anggota DPR dari array anggotaDPR
                break; // Menghentikan iterasi setelah anggota dihapus
            }
        }
    }

    public function tampilkanAnggota(){ // Membuat fungsi untuk menampilkan daftar anggota DPR dalam tabel HTML
        echo "<style>
                table {
                    border-collapse: collapse; // Menggabungkan batas sel dalam tabel
                    width: 50%; // Menetapkan lebar tabel menjadi 50% dari lebar kontainer
                }
                th, td {
                    border: 1px solid black; // Mengatur border pada sel tabel
                    padding: 8px; // Mengatur padding di dalam sel tabel
                    text-align: center; // Mengatur teks di dalam sel tabel menjadi rata tengah
                }
                img {
                    width: 50px; // Menetapkan lebar gambar profil menjadi 50px
                    height: 50px; // Menetapkan tinggi gambar profil menjadi 50px
                    object-fit: cover; // Memastikan gambar profil tetap sesuai proporsi
                    display: block; // Mengatur gambar profil agar berada di tengah secara horizontal
                    margin: 0 auto; // Mengatur gambar profil agar berada di tengah secara horizontal
                }
              </style>";
    
        echo "<table>"; // Mulai membuat tabel
        echo "<tr><th>ID</th><th>Nama</th><th>Bidang</th><th>Partai</th><th>Foto Profil</th></tr>"; // Membuat baris header tabel
        foreach ($this->anggotaDPR as $anggota) { // Melakukan iterasi melalui array anggotaDPR
            echo "<tr>"; // Mulai baris tabel untuk setiap anggota DPR
            echo "<td>" . $anggota->getId() . "</td>"; // Menampilkan ID anggota DPR
            echo "<td>" . $anggota->getNama() . "</td>"; // Menampilkan nama anggota DPR
            echo "<td>" . $anggota->getBidang() . "</td>"; // Menampilkan bidang anggota DPR
            echo "<td>" . $anggota->getPartai() . "</td>"; // Menampilkan partai anggota DPR
            echo "<td><img src='" . $anggota->getFotoProfil() . "' alt='Foto Profil'></td>"; // Menampilkan gambar profil anggota DPR
            echo "</tr>"; // Mengakhiri baris tabel untuk setiap anggota DPR
        }
        echo "</table>"; // Mengakhiri pembuatan tabel
    }
}

// Contoh penggunaan
$daftarAnggota = new DaftarAnggotaDPR(); // Membuat objek daftarAnggota dari kelas DaftarAnggotaDPR

// Menambahkan 5 anggota DPR ke dalam daftar
$anggota1 = new AnggotaDPR(1, "Ratu", "Hukum", "Partai PKS", "ratu.jpg");
$anggota2 = new AnggotaDPR(2, "Tia", "Keuangan", "Partai Gerindra", "tia.jpg");
$anggota3 = new AnggotaDPR(3, "Jasmine", "Pendidikan", "Partai PPP", "jasmine.jpg");
$anggota4 = new AnggotaDPR(4, "Faya", "Kesehatan", "Partai PAN", "faya.jpg");
$anggota5 = new AnggotaDPR(5, "Rifanny", "Pertanian", "Partai Demokrat", "lysa.jpg");

$daftarAnggota->tambahAnggota($anggota1); // Menambahkan anggota DPR ke dalam daftar
$daftarAnggota->tambahAnggota($anggota2); // Menambahkan anggota DPR ke dalam daftar
$daftarAnggota->tambahAnggota($anggota3); // Menambahkan anggota DPR ke dalam daftar
$daftarAnggota->tambahAnggota($anggota4); // Menambahkan anggota DPR ke dalam daftar
$daftarAnggota->tambahAnggota($anggota5); // Menambahkan anggota DPR ke dalam daftar

echo "Daftar Anggota DPR:<br>"; // Menampilkan judul daftar anggota DPR
$daftarAnggota->tampilkanAnggota(); // Menampilkan daftar anggota DPR dalam tabel HTML

// Ubah data anggota DPR dengan ID 3
$anggotaBaru = new AnggotaDPR(3, "Jasmine", "Pendidikan", "Partai Nasdem", "jasmine.jpg");
$daftarAnggota->ubahAnggota(3, $anggotaBaru); // Mengubah data anggota DPR dengan ID 3

echo "<br>Data Anggota DPR dengan ID 3 telah diubah!<br>"; // Menampilkan pesan setelah data anggota DPR diubah
$daftarAnggota->tampilkanAnggota(); // Menampilkan daftar anggota DPR setelah perubahan

// Hapus anggota DPR dengan ID 2 dan 5
$daftarAnggota->hapusAnggota(2); // Menghapus anggota DPR dengan ID 2
$daftarAnggota->hapusAnggota(5); // Menghapus anggota DPR dengan ID 5

echo "<br>Data Anggota DPR dengan ID 2 dan 5 telah dihapus!<br>"; // Menampilkan pesan setelah data anggota DPR dihapus
$daftarAnggota->tampilkanAnggota(); // Menampilkan daftar anggota DPR setelah penghapusan

?>
