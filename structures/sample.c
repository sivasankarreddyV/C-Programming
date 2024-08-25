#include <stdio.h>
int main()
{
	struct sample
	{
		char c;
		int x;
	}s;
	printf("%d",sizeof(s));
}
