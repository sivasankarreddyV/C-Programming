#include <stdio.h>

int main()
{
    int a[2]={50,60};
    int *ptr;
    ptr =&a[0];
    printf("%u\n",ptr);
    printf("%u\n",++ptr);
    printf("%u\n",*ptr);
    //printf("%u\n",*ptr++);
    printf("%u\n",(*ptr)++);
    printf("%u\n",*(ptr++));

    return 0;
}
