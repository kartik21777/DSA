#include<bits/stdc++.h>
using namespace std;
int main()
{ 
     int digit,k =0;
     int n=12;
while(n>0)
      {
          digit = n%10;
          if(n%digit==0)
          {
          ++k;
       }  
           n = n/10;
      }
       cout<<k;
    }