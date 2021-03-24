import java.util.*;

public class Problem_03 {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int alice  = 0;
        int bob = 0;

        int a[] = new int[3];
        int b[] = new int[3];

        for(int i = 0;i < 3;i++){
            a[i] = sc.nextInt();
        }
        for(int i = 0;i < 3;i++){
            b[i] = sc.nextInt();
        }

        for(int j = 0;j < 3;j++){
            if(a[j] > b[j])
                alice += 1;
            else if(a[j] < b[j])
                bob += 1;
            else
                continue;
        }
        System.out.print(alice + " " + bob);
    }
}