// to print read and print 10 elements
#include <stdio.h>

int main()
{
    int i,a[10];
    printf("\nenter 10 elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
