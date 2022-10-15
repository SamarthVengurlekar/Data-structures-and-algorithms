//TREE TECURSION:- If a recursive functio is calling itself more than one time then it is tree recursion
//For value of n=3 15 calls are made 
//number of calls that are made 2^n+1 -1 =O(2^n)----Time (It may be different for different values)
//Space----Depends on maximum height of the stack

#include <stdio.h>

void fun(int n){
    if(n>0)
    {
        printf("%d",n);
        fun(n-1);
        fun(n-1);
    }
}
int main(){
    fun(3);
    return 0;
}