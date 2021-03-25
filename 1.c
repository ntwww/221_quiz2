#include<stdio.h>
int main()
{
    int n,i,n1,nub=0,nub1=0;
    scanf("%d",&n);
    n1=n;
    if(n<8)
    {
        printf("%d",n);
    }
    else
    {
        for(int k=8; k<=n; k++)
        {
            for(i=2; i<n;)
            {
                if(k%i==0)
                {
                    n/=i;
                    nub++;
                }
                else
                {
                    if(nub==2)
                    {
                        nub=0;
                        nub1++;
                    }
                    i++;
                }
            }
        }
    }
    if (n1==8)
    {
         printf("Not Cube Free");
    }
    else if(nub==3)
    {
         printf("Not Cube Free");
    }
    else
    {
    printf("%d",n1-nub1);

    }
}
