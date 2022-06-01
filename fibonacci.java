import java.io.*;
import java.util.*;


public class fibonacci {
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        int p=sc.nextInt();
        int fibo=fib(p);
        System.out.println(fibo);
    }


        static int fib(int n)
        {
            if(n==0 || n==1)
            {
                return n;
            }
            int result=fib(n-1)+fib(n-2);
            return result;


        }
        

    }

