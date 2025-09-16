import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int cnt = 0;

        String input = scan.next();

        input = input.replace("pi","*");
        input = input.replace("ka","*");
        input = input.replace("chu","*");

        for(int i = 0; i < input.length(); i++){
            if(input.charAt(i) == '*'){
                cnt++;
            }
        }

        if(input.length() == cnt){
            System.out.println("YES");
        }
        else
            System.out.println("NO");
    }
}
