import java.io.*;
import java.util.*;

public class array {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n=sc.nextInt();
        int[]a=new int[n];
        int x=Integer.MIN_VALUE;
        boolean flag=true;
        System.out.println("Enter the element...");
        for(int i=0;i<n;i++)
        {
         a[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
            if(x>a[i])
            {
                flag=false;
                x=a[i+1];
            }
            
        }
        System.out.println(flag);
        
        
        
         
        

    }
}
