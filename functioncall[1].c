#include <stdio.h>
/* NAME afsha sayyed
UIN 251P062
ROLL NO 62
CLASS COMPUTER C3*/
void counter()
{
    // static int count =0;
    static int count = 0;
    count++;
    printf("number of time function is called %d\n", count);
}
int main()
{
    counter();
    counter();
    counter();
    counter();
    return 0;
}