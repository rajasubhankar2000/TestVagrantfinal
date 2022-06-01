import java.io.*;
import java.util.*;

public class convene
{
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        print(n);

    }
    static void print(int n)
    {
        for(int i=0;i<(n*2)-1;i++)
        {
            for(int j=0;j<(n*2)-1;j++)
            {
                if(i==0||i==j|| i==(n*2)-2 ||((n*2)-2)-i==j)
                {
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
            
        }
    }
}