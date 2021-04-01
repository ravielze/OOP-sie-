import java.util.*;

public class Dompet<T extends Number> {
    private ArrayList<Transaction<T>> transactions;

    public Dompet() {
        this.transactions = new ArrayList<Transaction<T>>();
    }

    public Dompet(T initialBalance) {
        this.transactions = new ArrayList<Transaction<T>>();
        addMoney(initialBalance);
    }

    public void addMoney(T money) {
        this.transactions.add(new Transaction<T>('+', money));
    }

    public boolean takeMoney(T money) {
        if (getBalance() < money.doubleValue()) {
            return false;
        }
        this.transactions.add(new Transaction<T>('-', money));
        return true;
    }

    public void setBalance(T balance) {
        this.transactions.clear();
        this.transactions.add(new Transaction<T>('+', balance));
    }

    public Double getBalance() {
        double total = 0.0D;
        for (Transaction<T> t : this.transactions) {
            if (t.getType() == '+') {
                total += t.getAmount().doubleValue();
            } else {
                total -= t.getAmount().doubleValue();
            }
        }
        return total;
    }

    public void printTransactions() {
        for (int i = 0; i < this.transactions.size(); i++) {
            Transaction<T> t = this.transactions.get(i);
            System.out.printf("Transactions %d: %c %d\n", i + 1, t.getType(), t.getAmount().intValue());
        }
    }

    public Double getAverageTransaction() {
        if (this.transactions.isEmpty()) {
            return null;
        }
        Double now = this.getBalance();
        return now.doubleValue() / Integer.valueOf(this.transactions.size()).doubleValue();
    }

    public Double getMinimumTransaction() {
        if (this.transactions.isEmpty()) {
            return null;
        }
        double min = this.transactions.get(0).getAmount().doubleValue();
        for (Transaction<T> t : this.transactions) {
            if (t.getAmount().doubleValue() < min) {
                min = t.getAmount().doubleValue();
            }
        }
        return Double.valueOf(min);
    }

    public Double getMaximumTransaction() {
        if (this.transactions.isEmpty()) {
            return null;
        }
        double max = this.transactions.get(0).getAmount().doubleValue();
        for (Transaction<T> t : this.transactions) {
            if (t.getAmount().doubleValue() > max) {
                max = t.getAmount().doubleValue();
            }
        }
        return Double.valueOf(max);
    }
}

//