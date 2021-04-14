public class MemberGold extends Person implements Member {

    public MemberGold(String name) {
        super(name);
    }

    @Override
    public String toString() {
        return "MemberGold: " + super.toString();
    }

}
