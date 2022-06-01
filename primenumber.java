import java.io.*;
import java.util.*;

public class primenumber
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        
        String r=" ";
        for(int i=1;i<=n;i++)
        {
            int count=0;
            for(int j=1;j<=i;j++)
            {
             if(i%j==0)
             {
                 count++;
                 
             }
            } 
            
            if(count==2)
            {
                r=r+i+" ";
            }

        
        }
        System.out.print(r);
        

    }
}