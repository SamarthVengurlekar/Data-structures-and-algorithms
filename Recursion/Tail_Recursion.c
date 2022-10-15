// TAIL RECURSION:- If a recursive function is calling itself and that recursive call is the last statement in a function 
// At returning time it doesn't have to perform anything at all
// Tail recursions can be easily converted into loop:-
//         1. Time taken by both of them is same [o(n)]
//         2. Space taken in tail rec is in o(n) as this uses stack internally but in loop its 0(1)
// In case on tail recursion loop is efficient 

//in terms of loop
// void fun (int n){

//     while  (n>0)
//     {
//         printf("%d",n);
//         n--;
//     }

// }


#include <stdio.h>

void fun (int n){

    if (n>0)
    {
        printf("%d",n);
        fun(n-1);
    }

}

int main(){
    int x=3;

    fun(x);
    return 0;
}

