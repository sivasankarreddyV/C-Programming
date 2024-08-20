// to print the area of a rectangle using functions
// without arguments and without return values
#include <stdio.h>
void area(int l,int b)
{
        int result;
        result=l*b;
        printf("the area of rectangle is: %d",result);
}
int main()
{
        int length,breadth;
        printf("enter the length of rectangle is: ",length);
        scanf("%d",&length);
        printf("enter the width of rectangle is: ",breadth);
        scanf("%d",&breadth);
        area(length,breadth);
        return 0;
}


