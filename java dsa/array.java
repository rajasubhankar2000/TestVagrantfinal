import java.io.*;
import java.util.*;


public class array {
    public static void main(String[]args)
    {
         //1d array
         Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         int a[]=new int[n];
         for(int i=0;i<n;i++)
         {
             a[i]=sc.nextInt();
         }
         for(int i=0;i<n;i++)
         {
             System.out.print(a[i]+" ");
         }
        
    }
}
