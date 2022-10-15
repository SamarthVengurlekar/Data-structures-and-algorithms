//HEAD RECURSION:- The function doesen't have to perform any operation at the time of calling it has to eveythig at the time of returning 
//Head recursion csnnot be easily converted in loop as it is but can be convertable

// void fun (int n){
//     int i=1;
//     while  (i<=n)
//     {
//         printf("%d",n);
//         i++;
//     }

// }


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