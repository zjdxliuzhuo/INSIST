package sample;

import java.util.Scanner;

/**
 * @author Asus
 */
public class Java320 {

    public static void main(String[]args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
//        int i = 1;
        int factor = 1;
//        while(i<=n)
//        {
//
//        factor = factor * i;
//        i = i + 1;
//        }
        for(int i=1;i<=n;i=i+1)
        {
            factor=factor*i;
        }
        System.out.println(factor);
    }
}
