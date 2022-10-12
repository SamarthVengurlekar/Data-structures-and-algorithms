// call by value
// #include<iostream>
// #include<stdio.h>
// using namespace std;

// struct rectangle
// {
//     int len;
//     int width;
// };

// void function(struct rectangle r)
// {
//     r.len=11;
//     r.width=55;
//     cout<<r.len<<endl;
//     cout<<r.width<<endl;
// }


// int main()
// {
//     struct rectangle r{10,5};
//     function (r);

//     cout<<r.len<<endl;
//     cout<<r.width<<endl;

//  return 0;
// }
//values inside main function are not changed

//call by adders
// #include<iostream>
// #include<stdio.h>
// using namespace std;

// struct rectangle
// {
//     int len;
//     int width;
// };

// void function(struct rectangle *r)  //pointer of rect
// {
//    // p->len=11;
//    // p->width=55;
//     cout<<p->len<<endl;
//     cout<<p->width<<endl;
// }


// int main()
// {
//     struct rectangle r{10,5};
//     function (&r);          //address of rect

//     cout<<r.len<<endl;
//     cout<<r.width<<endl;

//  return 0;
// }


//returning a pointer to a struct 
//job of a fun is to create an obj and return it
//object created in heap adn can be accecd in main fun
 #include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int len;
    int width;
};

struct rectangle *fun()
{
    struct rectangle *p;
    p=new rectangle;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    p->len=15;
    p->width=7;
    return p;
}

int main()
{
  

    struct rectangle *ptr =fun();
    cout<<ptr->len<<endl;
    cout<<ptr->width<<endl;

 return 0;
}