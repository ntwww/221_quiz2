#include<stdio.h>
int main()
{
int n,i,sum,x,real,nub=0;
scanf("%d",&n);
for(i=1;i<n;i++)
{
    real=i;
    while(1)
    {
        x=i%10;
        sum=sum*10+x;
        i/=10;
        if(real==sum)
        {
            nub++;
        }
    }
}
printf("%d",nub);
}
