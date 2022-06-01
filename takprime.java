import java.io.*;
import java.util.*;

public class takprime {
    public static void main(String[]args)
    {
     int n;
     Scanner sc=new Scanner(System.in);
     n=sc.nextInt();
     for(int i=0;i<n;i++)
     {
         int count =3;
         if(i%count==0 && count<i)
         {
          
          count++;
          
         }
         else{
             count++;
             i++;
         }
     }
     
    
} 
}
