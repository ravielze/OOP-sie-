public class Utility {

    public static <T> int getSize(T[] arr) {
        return arr.length;
    }

    public static <T extends Number> double getMax(T[] arr) {
        double max = arr[0].doubleValue();
        for (T x : arr) {
            if (x.doubleValue() > max) {
                max = x.doubleValue();
            }
        }
        return max;
    }

    public static <T extends Number> double getMin(T[] arr) {
        double min = arr[0].doubleValue();
        for (T x : arr) {
            if (x.doubleValue() < min) {
                min = x.doubleValue();
            }
        }
        return min;
    }

    public static <T extends Number> double getAverage(T[] arr) {
        double sum = 0D;
        for (T x : arr) {
            sum += x.doubleValue();
        }
        return sum / arr.length;
    }

    public static <T> T getFirst(T[] arr) {
        return arr[0];
    }

    public static <T> T getLast(T[] arr) {
        return arr[arr.length - 1];
    }

    public static <T extends Number> double getMidpoint(T[] arr) {
        int mid = (arr.length - 1) / 2;
        if (arr.length % 2 == 1) {
            return arr[mid].doubleValue();
        }
        return (arr[mid].doubleValue() + arr[mid + 1].doubleValue()) / 2D;
    }

    public static <T> T getMidpoint(T[] arr) {
        return arr[(arr.length / 2)];
    }

}
