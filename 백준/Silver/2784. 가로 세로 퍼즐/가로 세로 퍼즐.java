import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {
    static String[] input;
    static String[] result;
    static boolean[] isSelected;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // 0행, 1행, 2행, 0열, 1열, 2열
        input = new String[6];
        for (int i = 0; i < 6; i++) {
            input[i] = br.readLine();
        }
        result = new String[6];
        isSelected = new boolean[6];
        Arrays.sort(input);
        pick(0);
        System.out.println("0");
    }

    public static void pick(int cnt) {

        if (cnt == 6) {
            char[] row, col;
            for (int i = 0; i < 3; i++) {
                col = result[i+3].toCharArray();
                for (int j = 0; j < 3; j++) {
                    row = result[j].toCharArray();
                    if (row[i] != col[j])
                        return;
                }
            }

            for (int i = 0; i < 3; i++) {
                System.out.println(result[i]);
            }
            System.exit(0);
        }

        for (int i = 0; i < 6; i++) {
            if (isSelected[i])
                continue;
            isSelected[i] = true;
            result[cnt] = input[i];
            pick(cnt + 1);
            isSelected[i] = false;
        }
    }
}