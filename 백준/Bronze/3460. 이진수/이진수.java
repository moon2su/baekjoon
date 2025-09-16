import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int T = scan.nextInt();

        for(int i = 0; i < T; i++){
            int n = scan.nextInt();
            String binary = Integer.toBinaryString(n);
            char[] bn = binary.toCharArray();
            int m = bn.length;
            for(int j = m-1; j >= 0; j--){
                if(bn[j] == '1')
                    System.out.print(m-j-1+" ");
            }
        }
    }
}
