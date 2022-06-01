import java.io.*;
import java.util.*;

public class mergeSort {
    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.print(mergeSortt(n, arr));



    }
}
    static int mergeSortt(int n,int arr[])
    {
     int start=0;
     int end=n;
     int mid=(start+end)/2;

    }
    

