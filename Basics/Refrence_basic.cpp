// Nothing before variable name is data variable 
// ' * ' before variable name is pointer 
// ' & ' before variable name is reference
#include<iostream>
using namespace std;
int main()  
{
    int a=10;
    int &r=a;
    
    cout<<a<<endl;
   // cout<<r<endl; //to check
 return 0;
}