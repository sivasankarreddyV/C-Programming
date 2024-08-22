// to print the sample basic program of pointers
#include <stdio.h>
int main()
{
	int i = -100;
	int* ptr;
	ptr=&i;
	printf("%u\n",i);
	printf("%u\n",&i);
	printf("%u\n",ptr);
	printf("%u\n",&ptr);
	printf("%u\n",&ptr);
        printf("%u\n",*(&i));

	return 0;
}
