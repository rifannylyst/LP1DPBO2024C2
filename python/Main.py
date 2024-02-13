# Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
# Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
# melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Mengimpor kelas AnggotaDPR dari modul AnggotaDPR
from AnggotaDPR import AnggotaDPR
# Mengimpor modul PrettyTable untuk membuat tabel
from prettytable import PrettyTable

# Membuat kelas DPR untuk mengelola anggota DPR
class DPR:
    def __init__(self):
        # Inisialisasi list anggota DPR
        self.anggota = []

    # Metode untuk menambahkan anggota DPR baru ke dalam list
    def tambah_anggota(self, anggota):
        self.anggota.append(anggota)

    # Metode untuk mengubah data anggota DPR berdasarkan ID anggota
    def ubah_anggota(self, id_anggota, nama_baru, bidang_baru, partai_baru):
        for anggota in self.anggota:
            # Cek apakah ID anggota sesuai
            if anggota.id_anggota == id_anggota:
                # Jika sesuai, ubah data anggota
                anggota.nama = nama_baru
                anggota.bidang = bidang_baru
                anggota.partai = partai_baru
                return True  # Mengembalikan True jika berhasil diubah
        return False  # Mengembalikan False jika ID anggota tidak ditemukan

    # Metode untuk menghapus anggota DPR berdasarkan ID anggota
    def hapus_anggota(self, id_anggota):
        for anggota in self.anggota:
            # Cek apakah ID anggota sesuai
            if anggota.id_anggota == id_anggota:
                # Jika sesuai, hapus anggota dari list
                self.anggota.remove(anggota)
                return True  # Mengembalikan True jika berhasil dihapus
        return False  # Mengembalikan False jika ID anggota tidak ditemukan

    # Metode untuk menampilkan daftar anggota DPR dalam tabel
    def tampilkan_anggota(self):
        if not self.anggota:
            # Cek jika tidak ada anggota DPR dalam list
            print("Tidak ada anggota DPR.")
            return
        # Buat objek PrettyTable
        table = PrettyTable()
        # Tentukan field names (kolom-kolom pada tabel)
        table.field_names = ["ID", "Nama", "Bidang", "Partai"]
        for anggota in self.anggota:
            # Tambahkan data anggota ke dalam tabel
            table.add_row([anggota.id_anggota, anggota.nama, anggota.bidang, anggota.partai])
        # Tentukan penyelarasan teks untuk kolom Nama, Bidang, dan Partai
        table.align["Nama"] = "l"  # Rata kiri untuk kolom Nama
        table.align["Bidang"] = "l"  # Rata kiri untuk kolom Bidang
        table.align["Partai"] = "l"  # Rata kiri untuk kolom Partai
        # Cetak tabel yang berisi daftar anggota DPR
        print(table)

# Contoh penggunaan program
if __name__ == "__main__":
    # Inisialisasi objek DPR
    dpr = DPR()

    # Loop utama program
    while True:
        # Tampilkan pilihan menu
        print("\nMenu:")
        print("1. Tambah anggota DPR")
        print("2. Ubah anggota DPR")
        print("3. Hapus anggota DPR")
        print("4. Tampilkan anggota DPR")
        print("5. Keluar")

        # Terima input pilihan dari pengguna
        pilihan = int(input("Pilih Menu: "))

        # Pilihan 1: Tambah anggota DPR
        if pilihan == 1:
            id_anggota = int(input("ID Anggota: "))
            nama = input("Nama Anggota: ")
            bidang = input("Bidang: ")
            partai = input("Partai: ")
            anggota = AnggotaDPR(id_anggota, nama, bidang, partai)
            dpr.tambah_anggota(anggota)
            print("Anggota DPR berhasil ditambahkan.")
        
        # Pilihan 2: Ubah anggota DPR
        elif pilihan == 2:
            id_anggota = int(input("ID Anggota yang akan diubah: "))
            nama_baru = input("Nama baru: ")
            bidang_baru = input("Bidang baru: ")
            partai_baru = input("Partai baru: ")
            if dpr.ubah_anggota(id_anggota, nama_baru, bidang_baru, partai_baru):
                print("Data anggota DPR berhasil diubah.")
            else:
                print("ID Anggota tidak ditemukan.")
        
        # Pilihan 3: Hapus anggota DPR
        elif pilihan == 3:
            id_anggota = int(input("ID Anggota yang akan dihapus: "))
            if dpr.hapus_anggota(id_anggota):
                print("Data anggota DPR berhasil dihapus.")
            else:
                print("ID Anggota tidak ditemukan.")
        
        # Pilihan 4: Tampilkan anggota DPR
        elif pilihan == 4:
            print("Daftar Anggota DPR:")
            dpr.tampilkan_anggota()
        
        # Pilihan 0: Keluar dari program
        elif pilihan == 0:
            print("Program selesai.")
            break
        
        # Pilihan tidak valid
        else:
            print("Pilihan tidak valid. Silakan pilih menu yang benar.")
