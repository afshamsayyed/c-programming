#include <stdio.h>
/* afsha sayyed
uin:251P062
roll no:54
comps*/
int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("Array elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}