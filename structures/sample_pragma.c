// to print the sizeof by using pragma function
#include<stdio.h>
#include<string.h>
#pragma pack(1)
struct sample
{
    	int x;
        char c;
}s;
int main()
{
    	printf("%d",sizeof(s));
}
