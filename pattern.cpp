#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i =1;i<=n;++i)
    {
        if(i==1||i==n)
        {
            for(int j = 1;j<=n;++j)
            cout<<"* ";
        }
        else
        {
            for(int j =1;j<=n;++j)
            {
                if (j==1||j==n)
                cout<<"* ";
                else
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}