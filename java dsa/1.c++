#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int n=s.length();
  string r="";
  char b[n-1];
  strcpy(b,s.c_str());
  for(int i=n-1;i>=0;i--)
  {
      r=r+b[i];
  }
  

}