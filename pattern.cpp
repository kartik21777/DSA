#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int i =1;i<=n;++i)
    {
        cout<<(n+1)/2;
    }
    cout<<"\n";
    int low=1;
    int high = n;
    int k =0,o =1,m =0;
    while(low!=high)
    {
        for(int j =1;j<=n;++j)
        {
            if(j<=low)
            {
                
                cout<<((n+1)/2)-k;
                ++k;
            }
            else if(j>low&&j<high)
            {
                
                cout<<((n+1)/2)-o;
                ++o;
            }
            else
            {
                
                cout<<((n+1)/2)+m;
                ++m;
            } 
        }
        cout<<"\n";
        low++;
        high--;
        k = 0;
        m = 0;
        o = 1;
    }
    return 0;
}