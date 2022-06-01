import java.io.*;
import java.util.*;

public class reverseString {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        String p=sc.nextLine();
        String r=rev(p);
        System.out.println(r);
    }
       
        static String rev(String str)
       {
       char ch[]=str.toCharArray();
       String reverse="";
       for(int i=str.length()-1;i>=0;i--)
       {
           reverse=reverse+ch[i];
       }
       return reverse;
       }
    
}
