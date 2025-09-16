import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        for(int i = 1; i <= N; i++) {

            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }

            for (int k = 1; k <= 2 * N - 2 * i; k++) {
                System.out.print(" ");
            }

            for (int h = 1; h <= i; h++) {
                System.out.print("*");
            }
            System.out.println();
        }



        for(int i = N-1; i >= 1; i--){

            for(int j = 1; j <= i; j++){
                System.out.print("*");
            }

            for(int k = 1; k <= 2*N-2*i; k++){
                System.out.print(" ");
            }

            for(int h = 1; h <= i; h++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
