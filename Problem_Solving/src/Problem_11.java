import java.util.*;

public class Problem_11 {

    static int camelcase(String s) {
        int count =1;

        for (int i =0;i<s.length();i++) {

            String letter = Character.toString(s.charAt(i));

            if (letter == letter.toUpperCase())
                count++;
        }
        return count;
    }

    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int result = camelcase(s);
        System.out.println(result);
    }
}