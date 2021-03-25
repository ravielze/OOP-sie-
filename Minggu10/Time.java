public class Time {
    private int hour;
    private int minute;
    private int second;

    public Time() {
        this.hour = 0;
        this.minute = 0;
        this.second = 0;
    }

    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public Time(Time t) {
        this.hour = t.hour;
        this.minute = t.minute;
        this.second = t.second;
    }

    public int getHour() {
        return this.hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return this.minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return this.second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public int convertToSecond() {
        return this.hour * 3600 + this.minute * 60 + this.second;
    }

    public Time add(Time t) {
        int dS = (this.convertToSecond() + t.convertToSecond())%86400;
        
        int hour = dS / 3600;
        int minute = (dS / 60) % 60;
        int second = dS % 60;
        return new Time(hour, minute, second);
    }

    public Time minus(Time t) {
        if (lessThan(t)){
            return this;
        }
        int dS = (this.convertToSecond() - t.convertToSecond())%86400;
        
        int hour = dS / 3600;
        int minute = (dS / 60) % 60;
        int second = dS % 60;
        return new Time(hour, minute, second);
    }

    public boolean lessThan(Time t) {
        return this.convertToSecond() < t.convertToSecond();
    }

    public boolean greaterThan(Time t) {
        return this.convertToSecond() > t.convertToSecond();
    }

    public void printTime() {
        System.out.printf("%02d:%02d:%02d\n", hour, minute, second);
    }
}