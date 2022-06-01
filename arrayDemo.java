import java.io.*;
import java.util.*;


public class arrayDemo {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)

        {
            a[i]=sc.nextInt();
        }
        int x=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
        if(x<a[i]){ 
            x=a[i+1];
            System.out.println(x);
        
        }
        }
        

    }
}
