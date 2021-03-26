import java.util.*;

public class Problem_05 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[][] = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int sumFirstDiag = 0;
        int sumSecondDiag = 0;
        int k= n-1;

        for (int i = 0; i < n; i++) {
            sumFirstDiag = sumFirstDiag + arr[i][i];
            sumSecondDiag = sumSecondDiag + arr[i][k];
            k--;
        }
        System.out.println(Math.abs(sumFirstDiag-sumSecondDiag));
    }
}