import java.time.LocalTime;

public class Main {

    public static void main(String[] args) {
        Kasir kasir = new Kasir("Siapa aja", LocalTime.of(20, 0));
        Kasir kasir2 = new Kasir("Siapapun", LocalTime.of(18, 0));
        Antrean<Member> antrianBiasa = new Antrean<>(kasir);
        Antrean<MemberGold> antrianSpesial = new Antrean<>(kasir2);
        antrianBiasa.masukAntrian(new MemberSilver("A1"));
        antrianBiasa.masukAntrian(new MemberSilver("A2"));
        antrianBiasa.masukAntrian(new MemberGold("B"));
        antrianBiasa.masukAntrian(new MemberSilver("C"));
        antrianBiasa.masukAntrian(new MemberSilver("D"));
        antrianBiasa.masukAntrian(new MemberGold("E"));
        antrianBiasa.masukAntrian(new MemberGold("F"));
        antrianSpesial.masukAntrian(new MemberGold("G"));
        antrianSpesial.masukAntrian(new MemberGold("H"));
        antrianSpesial.masukAntrian(new MemberGold("I"));

        System.out.println("Kondisi antrian biasa saat ini:");
        System.out.println(antrianBiasa);
        System.out.println("Kondisi antrian spesial saat ini:");
        System.out.println(antrianSpesial);
        System.out.println("Keluar antrian biasa: " + antrianBiasa.keluarAntrian());
        System.out.println("Pindahan antrian biasa ke spesial!");
        antrianBiasa.pindahAntrean(antrianSpesial);
        System.out.println("Kondisi antrian spesial saat ini:");
        System.out.println(antrianSpesial);
        System.out.println("Keluar antrian spesial: " + antrianSpesial.keluarAntrian());
        System.out.println("Kondisi antrian biasa saat ini:");
        System.out.println(antrianBiasa);
    }
}
