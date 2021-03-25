#include<stdio.h>
int main()
{
    int n,i,n1,nub=0;
    scanf("%d",&n);
    n1=n;
    if(n<8)
    {
        printf("%d",n);
    }
    else
    {
    for(i=2;i<n;)
    {
        if(n%i==0)
        {
            n/=i;
            nub++;
        }
        else
        {
            i++;
            nub=0;
        }
    }
printf("%d %d ",i,nub+1);
    }
}
