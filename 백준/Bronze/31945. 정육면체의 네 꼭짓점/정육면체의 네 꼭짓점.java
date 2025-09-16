import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.StringTokenizer;

public class Main {

    static int[][] pointers = {{0,0,0}, {0,0,1}, {0,1,0}, {0,1,1}, {1,0,0}, {1,0,1}, {1,1,0}, {1,1,1}};

    public static boolean isPlane(int [] planes){
        int[] sum = {0, 0, 0};
        for(int plane : planes){
            int[] point = pointers[plane];
            for(int i = 0; i < 3; i++){
                sum[i] += point[i];
            }
        }
        int count0 = 0;
        int count2 = 0;
        int count4 = 0;

        for(int x:sum){
            if(x == 0) count0++;
            if(x == 2) count2++;
            if(x == 4) count4++;
        }
        return count2 == 2 && (count0 == 1 || count4 == 1);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st;

        for(int i = 0; i < n; i++){
            st = new StringTokenizer(br.readLine());
            int[] arr = new int[4];
            for(int j = 0; j < 4; j++){
                arr[j] = Integer.parseInt(st.nextToken());
            }
            bw.append(isPlane(arr)?"YES\n":"NO\n");
        }
        bw.close();
        br.close();
    }
}
