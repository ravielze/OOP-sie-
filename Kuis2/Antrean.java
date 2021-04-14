import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Antrean<T extends Member> {

    private List<T> storage;
    private Kasir kasir;

    public Antrean(Kasir kasir) {
        this.storage = new ArrayList<T>();
        this.kasir = kasir;
    }

    public Kasir getKasir() {
        return this.kasir;
    }

    public void setKasir(Kasir kasir) {
        this.kasir = kasir;
    }

    public void masukAntrian(T member) {
        this.storage.add(member);
    }

    public T keluarAntrian() {
        return this.storage.remove(0);
    }

    public void pindahAntrean(Antrean<? super MemberGold> antrianLain) {
        List<? extends MemberGold> copy = this.storage.stream().filter(MemberGold.class::isInstance)
                .map(MemberGold.class::cast).collect(Collectors.toList());
        this.storage.removeAll(copy);
        copy.forEach(x -> antrianLain.masukAntrian(x));

    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        int i = 1;
        for (T x : this.storage) {
            sb.append(String.format("%d. %s\n", i, x));
            i++;
        }
        return sb.toString();
    }
}
