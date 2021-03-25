#include<stdio.h>
int main()
{
int i,n,nub=0,x,y,c,v,b,q,real;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i<10)
    {
    real=i;
    x=i%10;
    if (real==x)
    {
        nub+=1;
    }
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
    else if (i<100000)
    {
        x=i%10;
        c=i%100;
        c=c/10;
        y=i/10000;
        v=i/1000;
        v=v%10;
        if(x==y&&v==c)
        {
            nub+=1;
        }
    }
    else if (i<1000000)
    {
        x=i%10;
        c=i%100;
        c=c/10;
        b=i%1000;
        b=b/100;
        y=i/100000;
        v=i/10000;
        v=v%10;
        q=i/1000;
        q=q%10;
        if(x==y&&v==c&&q==b)
        {
            nub+=1;
        }
    }
}
printf("%d",nub);

}
