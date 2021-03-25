#include<stdio.h>
int main()
{
int i,n,nub=0,x,y,c,v;
scanf("%d",&n);
for(i=1;i<n;i++)
{
    if(i<10)
    {
    nub=9;
    }
    else if (i<100)
    {
        x=i%10;
        y=i/10;
        if(x==y)
        {
            nub+=1;
        }
    }
    else if (i<1000)
    {
        x=i%10;
        y=i/100;
        if(x==y)
        {
            nub+=1;
        }
    }
    else if (i<10000)
    {

        x=i%10;
        c=i%100;
        c=c/10;
        y=i/1000;
        v=i/100;
        v=v%10;
        if(x==y&&v==c)
        {
            nub+=1;
        }
    }
}
printf("%d",nub);

}
