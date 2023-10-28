#include<stdio.h>
#include<math.h>
void main()
{
    int n,k=0;
    printf("Enter number");
    scanf("%d",&n);
    if(n==1)
    printf("Prime");
    if(n>=2)
    {
    for(int i =2;i<=(int)sqrt(n);++i)
    {
        if(n%i==0)
        ++k;
       
    }
    if(k>=1)
    printf("Not Prime");
    else
     printf("Prime");

}
}