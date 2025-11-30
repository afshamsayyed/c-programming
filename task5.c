#include<stdio.h>

/*Afsha

UIN = 251P062

branch: comps*/

int factorial_l(int num) {

    int fact = 1;

    for(int i = 1; i <= num; i++) {

             fact*=i;
     } return fact;
}

int main () {

   int a=5;

  printf("factorial of %d is : %d" , a, factorial_l(a));
   return 0;

}
