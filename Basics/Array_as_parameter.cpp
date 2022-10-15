#include<iostream>
using namespace std;

void fun(int A[], int n) //call by value
{
    int i;
    for( i=0;i<n;i++)
        printf("%d",A[i]);

        cout<<sizeof(A)/sizeof(int)<<endl;
}

int main()
{
    int A[5]={2,4,6,8,10};
    fun(A,5);
        cout<<sizeof(A)/sizeof(int)<<endl;

 return 0;
}

//arrays can be passed only using address
//function can modify array as call by adress