#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int len;
    int width;
};


int main()
{
    rectangle r1{10,5};    //We can skip struct in "struct rectangle...." in c++  but ic 'C' its mandatory.
    
    
    // cout<<r1.len<<endl;
    // cout<<r1.width<<endl;


    // pointer 
    // rectangle *p=&r1;
    // cout<<p->len<<endl;
    // cout<<p->width<<endl; //we have to use arrow '->' fro pointer to structure.

    //using heap

    rectangle *p=&r1;
   // p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p=new rectangle;  //in cpp
    
    p-> len=7;      //"->" because pointer to structure.
    p->width=4;


    cout<<p->len<<endl;
    cout<<p->width<<endl;

 return 0;
}


