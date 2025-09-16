import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int T = scan.nextInt();

        for(int i = 0; i < T; i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            int r = 1;

            for(int j = 0; j < b; j++)
                r = (r * a) % 10;

            if(r == 0)
                r = 10;

            System.out.println(r);
        }
    }
}