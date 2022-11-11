#include <stdio.h>

//itterative function
int fib(int n)
{
    int t0=0,t1=1,s=0,i;

    if(n<=1) 
        return n;

    for (i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    return s;
}


//recursive function
int rfib(int n)
{
    if (n<=1) return n;
    return rfib(n-2)+rfib(n-1);
}


//using memorization
int f[10];
int mfib(int n)
{
    if(n<=1){
        f[n]=n;
        return n;
    }
    else 
    if(f[n-2]==-1)
        f[n-2]=mfib(n-2);
    if(f[n-1]==-1)
        f[n-1]=mfib(n-1);

    return f[n-2]+f[n-1];
}

int main(){
// memorization 
    int i;
    for(i=0;i<10;i++)
        f[i]=-1;
//addition till here
    printf("%d \n",mfib(6 ));

    return 0;
}