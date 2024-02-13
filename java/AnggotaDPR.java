/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP1 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

public class AnggotaDPR {
    // Deklarasi variabel anggota DPR
    private int id;             // Variabel untuk menyimpan ID anggota DPR
    private String nama;        // Variabel untuk menyimpan nama anggota DPR
    private String bidang;      // Variabel untuk menyimpan bidang keahlian anggota DPR
    private String partai;      // Variabel untuk menyimpan partai politik anggota DPR

    // Konstruktor untuk inisialisasi anggota DPR dengan nilai awal
    public AnggotaDPR(int id, String nama, String bidang, String partai) {
        this.id = id;           // Inisialisasi variabel ID
        this.nama = nama;       // Inisialisasi variabel nama
        this.bidang = bidang;   // Inisialisasi variabel bidang
        this.partai = partai;   // Inisialisasi variabel partai
    }

    // Getter untuk mengambil nilai ID anggota DPR
    public int getId() {
        return id;
    }

    // Getter untuk mengambil nilai nama anggota DPR
    public String getNama() {
        return nama;
    }

    // Getter untuk mengambil nilai bidang keahlian anggota DPR
    public String getBidang() {
        return bidang;
    }

    // Getter untuk mengambil nilai partai politik anggota DPR
    public String getPartai() {
        return partai;
    }

    // Setter untuk mengatur nilai nama anggota DPR
    public void setNama(String nama) {
        this.nama = nama;
    }

    // Setter untuk mengatur nilai bidang keahlian anggota DPR
    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    // Setter untuk mengatur nilai partai politik anggota DPR
    public void setPartai(String partai) {
        this.partai = partai;
    }
}