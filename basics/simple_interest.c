//to print thesimple interest using input function
#include <stdio.h>
int main()
{
	int principle,time,rate,simple_interest;

	printf("enter the principle amount: ",principle);
	scanf("%d",&principle);
	printf("enter the time taken: ",time);
	scanf("%d",&time);
	printf("enter the rate: ",rate);
	scanf("%d",&rate);

	simple_interest=(principle*time*rate)/100;

	printf("the simple_interest is: %d",simple_interest);
 	return 0;
}      
