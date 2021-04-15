import java.util.ArrayList;

public class CompileErrorException extends Exception {

    private ArrayList<Integer> errorLocations;

    public CompileErrorException(ArrayList<Integer> li) {
        this.errorLocations = li;
    }

    public void showErrors() {
        for (int a : errorLocations) {
            System.out.println("Error di baris : " + (a + 1));
        }
    }

}
