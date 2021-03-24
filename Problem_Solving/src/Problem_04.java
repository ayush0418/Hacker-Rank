import java.util.*;

public class Problem_04{
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n =  scanner.nextInt() ;
        long[] arr = new long[n];

        long sum = 0;
        for (int i=0;i<n;i++){
            arr[i]  = scanner.nextInt();
            sum = sum + arr[i];
        }
        System.out.println(sum);
    }
}