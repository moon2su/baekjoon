import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        for(int i = 0; i < N; i++) {

            for (int k = 0; k < i; k++) {
                System.out.print(" ");
            }

            for (int j = 1; j <= (2*N-1) - (2 * i); j++) {
                System.out.print("*");
            }
            
            System.out.println();
        }

        for(int i = N-1; i >= 1; i--){

            for(int j = 1; j <= i-1; j++){
                System.out.print(" ");
            }

            for(int k = 1; k <= (2*N)-(2*i-1); k++){
                System.out.print("*");
            }
            
            System.out.println();
        }
    }
}
