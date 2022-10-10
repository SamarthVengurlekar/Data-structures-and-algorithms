
//Call by value OR Pass by value  
// Swap function   

// #include<iostream>
// using namespace std;

// void swap(int x, int y)
// {
//     int temp;
//     temp = x;
//     x=y;
//     y = temp;
// }

// int main()
// {
//     int a,b;
//     a = 10;
//     b = 20;
//     swap(a,b);
//     cout<<a<<endl;
//     cout<<b<<endl;
//  return 0;
// }

// Swap function cannot be written usong pass by values method.
//Used when we have to only return the result








//Call by address 
//Adress of actual parameters are passed to fprmal parameters ad formal parameters must be pointers,
// any changes in function must modify actual parameters.

// #include<iostream>
// using namespace std;

// void swap(int *x, int *y)     //pointers
// {
//     int temp;
//     temp = *x;         // dref to access the data of adress passed
//     *x=*y;
//     *y = temp;
// }

// int main()
// {
//     int a,b;
//     a = 10;
//     b = 20;
//     swap(&a,&b);     //to send addresses
//     cout<<a<<endl;
//     cout<<b<<endl;
//  return 0;
// }
// Actual data is swaped using this method.
//Used when U want a function to directly work upon actual parameters.







//Call by reference
//can be used only in c++
// Same as Call by value just add &/ref to swap fun

#include<iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y = temp;
}

int main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
 return 0;
}
//in this swap fun. has become a part of main function


