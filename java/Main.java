/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        // Membuat ArrayList untuk menyimpan daftar anggota DPR
        ArrayList<AnggotaDPR> anggotaDPRList = new ArrayList<>();
        Scanner sc = new Scanner(System.in); // Membuat objek Scanner untuk input dari pengguna

        boolean running = true; // Variabel untuk menandai apakah program masih berjalan atau tidak
        while(running){ // Loop utama program
            // Menampilkan menu pilihan
            System.out.println("Menu:");
            System.out.println("1. Tampilkan daftar anggota DPR");
            System.out.println("2. Tambah anggota DPR");
            System.out.println("3. Ubah data anggota DPR");
            System.out.println("4. Hapus anggota DPR");
            System.out.println("5. Keluar");
            System.out.print("Pilih menu: ");

            int menu = sc.nextInt(); // Menerima input menu dari pengguna
            sc.nextLine(); // Membuang newline dari buffer

            switch(menu){
                case 1: // Opsi untuk menampilkan daftar anggota DPR
                    if(anggotaDPRList.isEmpty()){ // Jika daftar kosong, tampilkan pesan
                        System.out.println("Daftar Anggota DPR kosong.");
                    } else { // Jika tidak kosong, tampilkan daftar anggota DPR
                        System.out.println("Daftar Anggota DPR:");
                        printTableHeader(); // Mencetak header tabel

                        for(AnggotaDPR anggota : anggotaDPRList){ // Loop untuk mencetak setiap anggota
                            printAnggotaDPRData(anggota); // Mencetak data anggota DPR
                        }

                        printTableFooter(); // Mencetak footer tabel
                    }
                    break;
                case 2: // Opsi untuk menambah anggota DPR baru
                    // Meminta input nama, bidang, dan partai dari pengguna
                    System.out.print("Masukkan nama anggota: ");
                    String nama = sc.nextLine();
                    System.out.print("Masukkan bidang: ");
                    String bidang = sc.nextLine();
                    System.out.print("Masukkan partai: ");
                    String partai = sc.nextLine();

                    // Menentukan ID baru dengan menghitung jumlah anggota dan menambahkannya dengan 1
                    int newId = anggotaDPRList.size() + 1;

                    // Menambahkan anggota baru ke dalam daftar
                    anggotaDPRList.add(new AnggotaDPR(newId, nama, bidang, partai));

                    // Menampilkan pesan konfirmasi penambahan
                    System.out.println("Anggota DPR baru berhasil ditambahkan dengan ID: " + newId);
                    break;
                case 3: // Opsi untuk mengubah data anggota DPR
                    if(anggotaDPRList.isEmpty()){ // Jika daftar kosong, tampilkan pesan
                        System.out.println("Daftar Anggota DPR kosong.");
                    } else { // Jika tidak kosong, minta input ID anggota yang akan diubah
                        System.out.print("Masukkan ID anggota yang akan diubah: ");
                        int idToEdit = sc.nextInt();
                        sc.nextLine(); // Membuang newline dari buffer
                        AnggotaDPR anggotaToEdit = null;

                        // Mencari anggota yang sesuai dengan ID yang dimasukkan
                        for(AnggotaDPR anggota : anggotaDPRList){
                            if(anggota.getId() == idToEdit){ // Jika ID cocok, simpan anggota tersebut
                                anggotaToEdit = anggota;
                                break;
                            }
                        }
                        if(anggotaToEdit != null){ // Jika anggota ditemukan, minta input baru
                            // Meminta input nama, bidang, dan partai yang baru
                            System.out.print("Masukkan nama baru: ");
                            anggotaToEdit.setNama(sc.nextLine());
                            System.out.print("Masukkan bidang baru: ");
                            anggotaToEdit.setBidang(sc.nextLine());
                            System.out.print("Masukkan partai baru: ");
                            anggotaToEdit.setPartai(sc.nextLine());

                            // Menampilkan pesan konfirmasi perubahan
                            System.out.println("Data anggota DPR berhasil diubah.");
                        } else { // Jika ID tidak ditemukan, tampilkan pesan
                            System.out.println("ID anggota tidak ditemukan.");
                        }
                    }
                    break;
                case 4: // Opsi untuk menghapus anggota DPR
                    if(anggotaDPRList.isEmpty()){ // Jika daftar kosong, tampilkan pesan
                        System.out.println("Daftar Anggota DPR kosong.");
                    } else { // Jika tidak kosong, minta input ID anggota yang akan dihapus
                        System.out.print("Masukkan ID anggota yang akan dihapus: ");
                        int idToDelete = sc.nextInt();
                        boolean deleted = false;

                        // Loop untuk mencari dan menghapus anggota yang sesuai dengan ID yang dimasukkan
                        for(int i = 0; i < anggotaDPRList.size(); i++){
                            if (anggotaDPRList.get(i).getId() == idToDelete) { // Jika ID cocok, hapus anggota tersebut
                                anggotaDPRList.remove(i);
                                deleted = true;
                                // Menampilkan pesan konfirmasi penghapusan
                                System.out.println("Anggota DPR berhasil dihapus.");
                                break;
                            }
                        }
                        if(!deleted) { // Jika ID tidak ditemukan, tampilkan pesan
                            System.out.println("ID anggota tidak ditemukan.");
                        }
                    }
                    break;
                case 5: // Opsi untuk keluar dari program
                    running = false; // Set running menjadi false untuk mengakhiri loop
                    break;
                default: // Opsi untuk input yang tidak valid
                    System.out.println("Menu tidak valid.");
            }
        }
        sc.close(); // Menutup objek Scanner setelah penggunaan selesai
    }

    // Metode untuk mencetak header tabel
    private static void printTableHeader(){
        System.out.println("+----+--------------+------------+-----------+");
        System.out.println("| ID |     Nama     |   Bidang   |   Partai  |");
        System.out.println("+----+--------------+------------+-----------+");
    }

    // Metode untuk mencetak data anggota DPR dalam baris tabel
    private static void printAnggotaDPRData(AnggotaDPR anggota){
        System.out.printf("| %-2d | %-12s | %-10s | %-9s |\n", anggota.getId(), anggota.getNama(),
                anggota.getBidang(), anggota.getPartai());
    }

    // Metode untuk mencetak footer tabel
    private static void printTableFooter(){
        System.out.println("+----+--------------+------------+-----------+");
    }
}