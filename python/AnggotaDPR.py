# Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
# Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

class AnggotaDPR:
    def __init__(self, id_anggota, nama, bidang, partai):
        # Inisialisasi objek AnggotaDPR dengan atribut id_anggota, nama, bidang, dan partai
        self.id_anggota = id_anggota  # Mengatur id anggota
        self.nama = nama  # Mengatur nama anggota
        self.bidang = bidang  # Mengatur bidang anggota
        self.partai = partai  # Mengatur partai anggota

    def __str__(self):
        # Mengonversi objek AnggotaDPR menjadi string dengan format tertentu
        return f"ID: {self.id_anggota}, Nama: {self.nama}, Bidang: {self.bidang}, Partai: {self.partai}"
