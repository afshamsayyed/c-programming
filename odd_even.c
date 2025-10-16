#include<stdio.h>

/*Name= Afsha
Age= 17
Class= comps
Division= C
UIN= 251P062*/

int main () {

    int number;

    printf ("Enter an integer: ");
    scanf ("&d", &number) ;

    if (number & 2 == 0) {
        printf ("The number is even") ;
 } else {
   printf("The number is odd");
 }
   return 0;
}
