public class Rekening {
    // Daftar transaksi yang telah dilakukan pada rekening ini
    private Transaksi[] daftarTransaksi;
    // Jumlah transaksi yang telah dilakukan pada rekening ini
    private int jumlahTransaksi;
    // Jumlah transaksi maksimum yang dapat disimpan
    private int maxTransaksi;

    // Konstruktor, dengan nilai maxTransaksi awal
    public Rekening(int maxTrans) {
        this.maxTransaksi = maxTrans;
        daftarTransaksi = new Transaksi[maxTrans];
        this.jumlahTransaksi = 0;
    }

    // Getter
    public int getJumlahTransaksi() {
        return this.jumlahTransaksi;
    }

    public int getMaxTransaksi() {
        return this.maxTransaksi;
    }

    // Mengembalikan array baru yang berisi `count` transaksi terakhir yang
    // dilakukan
    public Transaksi[] getLastTransaksi(int count) {
        Transaksi[] result = new Transaksi[count];
        int j = jumlahTransaksi - count;
        for (int i = 0; i < count; i++) {
            result[i] = this.daftarTransaksi[j];
            j++;
        }
        return result;
    }

    // Mengembalikan saldo pada rekening, yaitu hasil penjumlahan perubahan semua
    // transaksi yang telah dilakukan
    public double getSaldo() {
        double result = 0;
        for (int i = 0; i < this.jumlahTransaksi; i++) {
            result += daftarTransaksi[i].getPerubahan();
        }
        return result;
    }

    // Membuat transaksi baru yang menambahkan `amount` uang pada rekening.
    // `amount` harus positif dan harus ada sisa tempat di rekening.
    // Mengembalikan status berhasil/gagal penyimpanan uang. (Jika berhasil,
    // mengembalikan true)
    public boolean simpanUang(double amount) {
        if (this.jumlahTransaksi != this.maxTransaksi && amount > 0) {
            this.daftarTransaksi[this.jumlahTransaksi] = new Transaksi(this, amount);
            this.jumlahTransaksi++;
            return true;
        }
        return false;
    }

    // Membuat transaksi baru yang mengurangi `amount` uang pada rekening.
    // `amount` harus positif dan lebih kecil dari saldo, dan harus ada sisa tempat
    // di rekening.
    // Harus ada sisa tempat di rekening.
    // Mengembalikan status berhasil/gagal penarikan uang. (Jika berhasil,
    // mengembalikan true)
    public boolean tarikUang(double amount) {
        if (this.jumlahTransaksi != this.maxTransaksi && getSaldo() >= amount && amount > 0) {
            this.daftarTransaksi[this.jumlahTransaksi] = new Transaksi(this, amount * -1);
            this.jumlahTransaksi++;
            return true;
        }
        return false;
    }
}