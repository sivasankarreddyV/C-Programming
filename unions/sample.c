#include <stdio.h>
union sample
{
	int i;
	char c;
};

int main()
{
	union sample u;

	u.i=1;
	if(u.c==1)
	{
		printf("it is little endian");
	}
	else
	{
		printf("it is big endian");
	}
	return 0;
}
