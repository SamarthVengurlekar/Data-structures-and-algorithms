// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=11;
//     int *p;
//     p=&a;

//     cout<<a;
//     printf("\nusing pointer %d,%d",*p,&a);
//  return 0;
// }





// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int main()
// {
//       int A[5]={2,4,6,8,10};
//       int*p;
//       p=A;    //pointer with an array.

//       for(int i=0;i<5;i++)
//       {
//         cout<<p[i]<<endl;
//       }


//  return 0;
// }



#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
   
      int*p;
    //p(int *)malloc(5*sizeof(int));   //array using heap in C
    p=new int[5]; //array using heap in C++

    p[0]=11; p[1]=332; p[2]=55; p[3]=67; p[4]=99;
      for(int i=0;i<5;i++)
        cout<<p[i]<<endl;

    delete [ ] p;
    free(p);

 return 0;
}


//Size of Pointer is independent of its datatype