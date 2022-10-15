//HEAD RECURSION:- The function doesen't have to perform any operation at the time of calling it has to eveythig at the time of returning 

#include <stdio.h>

void fun (int n){

    if (n>0)
    {
        fun(n-1);
        printf("%d",n);
       
    }

}

int main(){
    int x=3;

    fun(x);
    return 0;
}