#include <stdio.h>

// double e(int x, int n){
//     static double p=1,f=1;
//     double r;

//     if (n==0)
//         return 1;
//     else{
//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;

//         return r+p/f;
//     }          
// }


//method 2 
//n^2 multiplications are required for reducing the number of multiplications we take common terms
//recursive function processing is done at calling itself 
//using loop
// int e(int x, int n){
//     int s=1;
//     for(n>0;n--){
//         s=1+x/n*s;
//     }
//     return s;
// }

//using recursion
int e(int x, int n){
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}


int main(){
        
    printf("%lf \n",e(4,20));
    return 0;
}