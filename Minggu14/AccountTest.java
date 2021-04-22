public class AccountTest {
    // Account Factory dari compiler olympia
    public AccountTest() {
        // Tidak melakukan apa-apa
    }

    public void test() {
        Account a = AccountFactory.withBalance(20);
        assert a.getBalance() == 20 && a.getNumOfTransaction() == 0;

        Account c = AccountFactory.withBalance(0);
        Account d = AccountFactory.withBalance(0);
        try {
            c.transfer(d, 50);
            assert false;
        } catch (InvalidAmountException ex) {
            assert true;
        }
        assert c.getBalance() == 0 && d.getBalance() == 0;

        Account e = AccountFactory.withBalance(50);
        Account f = AccountFactory.withBalance(0);
        try {
            e.transfer(f, 50);
            assert true;
        } catch (InvalidAmountException ex) {
            assert false;
        }
        assert e.getBalance() == 0 && f.getBalance() == 50 && e.getNumOfTransaction() == 1
                && f.getNumOfTransaction() == 1;

        Account g = AccountFactory.withBalance(50);
        Account h = AccountFactory.withBalance(0);
        try {
            g.transfer(h, 50); // a = 0, b = 50
            h.transfer(g, 30); // b = 20, a = 30
            g.transfer(h, 10); // b = 30, a = 20
            assert true;
        } catch (InvalidAmountException ex) {
            assert false;
        }
        assert g.getBalance() == 20 && h.getBalance() == 30 && g.getNumOfTransaction() == 3
                && h.getNumOfTransaction() == 3;
    }
}