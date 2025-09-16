import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        for(int i = 1; i <= N; i++) {

            for (int j = N; j > i; j--) {
                System.out.print(" ");
            }

            if(i == N){
                for(int j = 0; j < 2*i-1; j++)
                    System.out.print("*");
            }

            else{
                for(int j = 0; j < 2*i-1; j++){
                    if(j == 0 || j == 2*i-2){
                        System.out.print("*");
                    }
                    else
                        System.out.print(" ");
                }
            }
            System.out.println();
        }

    }
}
