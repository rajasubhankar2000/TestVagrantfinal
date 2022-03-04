 #include<bits/stdc++.h>
 using namespace std;
 void longestArithmeticSubarray(int arr[],int n)
 {
     int mx=2;
     int count=2;
     int diff=arr[1]-arr[0];
     int j=2;
     while(j<n)
     {
         if(diff==arr[j+1]-arr[j]){
             count++;
         }
         else{
             diff=arr[j+1]-arr[j];
             count=2;
         }
         mx=max(mx,count);
         j++;
     }
     
     cout<<mx<<endl;

 }
 int main()
 {
     int n,a[n];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     longestArithmeticSubarray(a,n);

     return 0;
 }