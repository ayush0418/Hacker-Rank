import java.util.*;

public class Problem_06 {

    static void miniMaxSum(long arr[]) {
        long Sum = 0;
        long maxSum = 0;
        long minSum = Long.MAX_VALUE;

        for(int i= 0;i<5;i++){
            Sum = Sum + arr[i];
        }
        for(int j =0;j<5;j++) {
            long Sum1 = Sum - arr[j];

            if (Sum1 > maxSum) {
                maxSum = Sum1;
            }
            if(Sum1 < minSum){
                minSum = Sum1;
            }
        }
        System.out.print(minSum + " ");
        System.out.println(maxSum);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        long arr[] = new long[5];

        for (int i = 0; i < 5; i++) {
            arr[i]= sc.nextInt();
        }
        miniMaxSum(arr);
    }
}