import java.util.*;

public class Problem_10 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int maxValue = 0;
        int count =0;

        int candles[] = new int[n];
        for(int i =0;i<n;i++){
            candles[i] = sc.nextInt();
        }

        for(int i =0;i<n;i++) {
            if (candles[i] >= maxValue) {
                maxValue = candles[i];
            }
        }
            for (int ele:candles) {
                if (ele == maxValue) {
                    count++;
                }
            }

        System.out.println(count);
    }
}