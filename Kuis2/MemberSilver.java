public class MemberSilver extends Person implements Member {

    public MemberSilver(String name) {
        super(name);
    }

    @Override
    public String toString() {
        return "MemberSilver: " + super.toString();
    }
}
