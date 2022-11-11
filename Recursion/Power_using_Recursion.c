#include <stdio.h>
// m^n

int power(int m,int n){
    if(n==0)
        return 1;
    return power(m,n-1)*m;
}

//for reduced number of multiplications 

int power1(int n, int m){
    if (n==0)
        return 1;
    if (n%2==0)
        return power1(m*m,n/2);
    return m * power1(m*m,(n-1)/2);

}

int main(){
    int r=power1(2,9);
    printf("%d",r); 
    return 0;
}