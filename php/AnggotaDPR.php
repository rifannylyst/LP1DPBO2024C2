<?php
/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan.Aamiin.
*/

// Mendefinisikan kelas AnggotaDPR
class AnggotaDPR {
    // Mendeklarasikan properti privat untuk data anggota DPR
    private $id;
    private $nama;
    private $bidang;
    private $partai;
    private $fotoProfil;

    // Konstruktor untuk menginisialisasi objek AnggotaDPR dengan data awal
    public function __construct($id, $nama, $bidang, $partai, $fotoProfil){
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->fotoProfil = $fotoProfil;
    }

    // Metode untuk mengembalikan ID anggota DPR
    public function getId(){
        return $this->id;
    }

    // Metode untuk mengembalikan nama anggota DPR
    public function getNama(){
        return $this->nama;
    }

    // Metode untuk mengembalikan bidang kerja anggota DPR
    public function getBidang(){
        return $this->bidang;
    }

    // Metode untuk mengembalikan partai politik anggota DPR
    public function getPartai(){
        return $this->partai;
    }

    // Metode untuk mengembalikan nama file foto profil anggota DPR
    public function getFotoProfil(){
        return $this->fotoProfil;
    }

    // Metode untuk mengatur ID anggota DPR
    public function setId($id){
        $this->id = $id;
    }

    // Metode untuk mengatur nama anggota DPR
    public function setNama($nama){
        $this->nama = $nama;
    }

    // Metode untuk mengatur bidang kerja anggota DPR
    public function setBidang($bidang){
        $this->bidang = $bidang;
    }

    // Metode untuk mengatur partai politik anggota DPR
    public function setPartai($partai){
        $this->partai = $partai;
    }

    // Metode untuk mengatur nama file foto profil anggota DPR
    public function setFotoProfil($fotoProfil){
        $this->fotoProfil = $fotoProfil;
    }
}

?>
