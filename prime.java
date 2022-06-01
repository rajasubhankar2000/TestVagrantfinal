import java.io.*;
import java.util.*;

public class prime {
    public static void main(String[]args)
    {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        boolean r=prime(n);
        System.out.println(r);  

    }
    public static boolean prime(int n)
    {
        int count=0;
      for(int i=3;i<n-1;i++)
      {
          if(i%2==0)
          {
              count++;
          }
      }
      if(count>0)
      {
          return true;
      }
      else{
          return false;
      }
    }
    
}
