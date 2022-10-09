#include<iostream>
using namespace std;


//Function defination
int add(int a, int b)
{
    int c;
    c=a+b;
    return (c);
}


int main()
{
    int num1,num2,sum;
    num1=10;
    num2=5;
    sum=add(num1,num2);
    printf("sum is %d",sum);

 return 0;
}