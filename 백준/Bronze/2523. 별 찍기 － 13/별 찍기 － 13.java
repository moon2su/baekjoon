import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        for(int i = 1; i <= N; i++) {

            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }

            System.out.println();
        }

        for(int i = N-1; i >= 1; i--){

            for(int k = 0; k < i; k++){
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
