// to print read and print 100 elements
#include <stdio.h>

int main()
{
    int i,a[50];
    int size;
    printf("enter size of the array: ");
    scanf("%d",&size);
    printf("\nenter %d elements:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}

