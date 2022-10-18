//n! = 1*2*3*4*......*n
// 0! = 1;
// 1! = 1;
// #include <stdio.h>
// //Recursive function for finding the factorial of first n numbers
// int fact(int n)
// {
//     if(n==0)
//         return (1);
//     return fact(n-1)*n; 
// }

//Itterative function for finding the factorial of first n numbers
int Ifact(int n)
{
    int f=1;
    int i;
    for ( i = 1; i <=n; i++)
        f=f*i;
        return f;
}

int main(){
    int r;
    r=Ifact(5);
    printf("%d",r);
    return 0;
}