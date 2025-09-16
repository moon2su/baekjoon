import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int day = scan.nextInt();
        int count = 0;
        
        for(int i = 0; i < 5; i++) {
            if (day == scan.nextInt()) {
                count++;
            }
        }
        System.out.println(count);

    }
}
