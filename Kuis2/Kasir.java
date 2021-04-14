import java.time.Duration;
import java.time.LocalTime;

public class Kasir extends Person {

    private LocalTime endTime;

    public Kasir(String name, LocalTime endTime) {
        super(name);
        this.endTime = endTime;
    }

    public LocalTime getEndTime() {
        return this.endTime;
    }

    public void setEndTime(LocalTime endTime) {
        this.endTime = endTime;
    }

    public boolean isShiftEnd() {
        return Duration.between(LocalTime.now(), endTime).toMinutes() < 0;
    }

}
