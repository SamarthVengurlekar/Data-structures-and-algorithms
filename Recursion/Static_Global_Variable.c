//Static variables are created in code section 
//It is cerated pnly one time ie. loading time of a program
//It will have only single copy generated

// #include <stdio.h>

// int fun (int n){
//     static int x=0;
//     if (n>0)
//     {
//         x++;
//         return fun(n-1)+x;
//     }
//     return 0;
// }

// int main(){
//     int a=5;

//     printf("%d",fun(a));
//     return 0;
// }

// Global Variable 
#include <stdio.h>
int x=0;
int fun (int n){
    
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a;

    a=fun(5);
    printf("%d\n",a);

    
    a=fun(5);           //when executed two times because in second call x will take value 10
    printf("%d\n",a);


    return 0;
}