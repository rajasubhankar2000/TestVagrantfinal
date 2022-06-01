import java.io.*;
import java.util.*;


public class revs {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String rev="";
        char a[]=s.toCharArray();
        for(int i=s.length()-1;i>=0;i--)
        { 
            
            rev=rev+a[i];

        }
        System.out.print(rev);

    }
}
