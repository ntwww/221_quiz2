#include<stdio.h>
int main()
{
    int n,real,a,q,nub=0,i,sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        real=i;
        q=i;
        for(;1;)
        {
            a=q%10;
            q/=10;
            sum=sum*10+a;
            if(real == sum )
            {
                nub++;
                sum=0;
                break;
            }

        }
    }
    printf("%d",nub);
}
