import java.util.*;

public class Problem_08 {

    static void plusMinus(int arr[]) {
        float positive = 0;
        float negative = 0;
        float zeros = 0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<0){ negative++; }
            else if(arr[i]>0){ positive++; }
            else{ zeros++; }
        }
        System.out.println(positive/ arr.length);
        System.out.println(negative/ arr.length);
        System.out.println(zeros/ arr.length);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        plusMinus(arr);
    }
}