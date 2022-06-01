import java.util.*;
public class Star {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                
            
                // System.out.print(j+" ");

                // char c=(char)j;
                // c+=(char)64;
                // System.out.print(c+" ");
                if(i==1||j==1||i==n||j==n)
                {
                    System.out.print("$"+" ");
                }
                else{
                    System.out.print(" "+" ");
                }
            }
            System.out.println();
        }
    }
    
}
