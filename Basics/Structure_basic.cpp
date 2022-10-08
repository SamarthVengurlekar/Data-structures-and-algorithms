#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int len;
    int width;
    char x;     //it takes 4 bytes but only 1 bytes is used 
}; // OR "}r1,r2;"  variable decleration or

//struct rectangle r1,r2,r3;

int main()
{
    struct rectangle r1{10,12};
    //r1.len=11;
   // r1.width=55;

    cout<<r1.len<<endl;
    cout<<r1.width<<endl;

    printf("%lu", sizeof(r1));

 return 0;
}