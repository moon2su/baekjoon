import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int A = scan.nextInt();
        int B = scan.nextInt();
        int V = scan.nextInt();

        int result = (V - B) / (A - B);

        if((V-B) % (A-B) != 0)
            result++;

        System.out.print(result);

    }
}
