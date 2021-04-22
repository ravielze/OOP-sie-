public class Fruit {
    private FruitType type;

    public Fruit(FruitType type) {
        this.type = type;
    }

    private void announceFruitType() {
        assert type == FruitType.BANANA || type == FruitType.ORANGE || type == FruitType.APPLE
                || type == FruitType.WATERMELON;
        switch (type) {
        case BANANA:
            System.out.println("Pisang");
            break;
        case WATERMELON:
            System.out.println("Semangka");
            break;
        case ORANGE:
            System.out.println("Jeruk");
            break;
        case APPLE:
            System.out.println("Apel");
            break;
        }
        // Mencetak nama buah dalam bahasa Indonesia sesuai dengan type dan diakhiri new
        // line
        // tanpa tanda kutip
        // Contoh: "Apel"

        // Gunakan assert untuk mengetes asumsi bahwa kode tidak akan masuk ke bagian
        // selain
        // FruitType yang telah didefinisikan
        // ...
    }

    private void peel() {
        assert type == FruitType.BANANA || type == FruitType.ORANGE;
        System.out.println("Peeling " + type);
        // Memastikan bahwa FruitType dari objek ini adalah ORANGE atau BANANA
        // ...

        // Mencetak "Peeling " tanpa tanda kutip diikuti dengan type dan new line
        // Contoh: "Peeling BANANA"
    }

    private void press() {
        assert type != FruitType.BANANA;
        System.out.println("Pressing " + type);
        // Memastikan bahwa FruitType dari objek ini adalah bukan BANANA
        // ...

        // Mencetak "Peeling " tanpa tanda kutip diikuti dengan type dan new line
        // Contoh: "Pressing WATERMELON"

    }

    private void removeCore() {
        assert type == FruitType.APPLE;
        System.out.println("Removing core APPLE");
        // Memastikan bahwa FruitType dari objek ini adalah APEL
        // ...

        // Mencetak "Removing core " tanpa tanda kutip diikuti dengan type dan new line
        // Contoh: "Removing core APPLE"
    }

    // Suatu saat, bila ada programmer yang ingin menambahkan method public,
    // Ia sadar kalau tidak semua method dapat dipanggil, tergantung fruitType.
    // Method di atas private, sehingga boleh menggunakan assertion.
    // Bila public, sebaiknya menggunakan exception dibanding assertion.
}