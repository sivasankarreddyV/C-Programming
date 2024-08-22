// to print an integer pointer stores only the address of an integer variable
#include <stdio.h>
int main()
{
	int x=25;
	int* p;
       	printf("the value of x is: %d\n",x);
	printf("the value at pointer p is: %d\n",x);
	printf("address of the variable x is: %x\n",&x);
	printf("p points to the address = %x\n",p);
        printf("Address of the pointer p = %x\n",&p);
	return 0;
}
