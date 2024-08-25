#include<stdio.h>
#include<string.h>
struct salary
{
	int id;
	char name[20];
	int basic;
};
int emp_salary(struct salary *s)
{
	
	float hra,da,itax,gsal,netsal;
	if(s->basic<=30000)
	{
		hra=((float)(s->basic*20)/100);
        	printf("the hra is %.2f\n",hra);
        	da=((float)(s->basic*10)/100);
        	printf("the DA is %.2f\n",da);
        	itax=((float)(s->basic*5)/100);
        	printf("the income tax is %.2f\n",itax);
	}
	else if(s->basic<=50000)
	{
		 hra=((float)(s->basic*25)/100);
        	 printf("the hra is %.2f\n",hra);
        	 da=((float)(s->basic*15)/100);
        	 printf("the DA is %.2f\n",da);
                 itax=((float)(s->basic*10)/100);
       		 printf("the income tax is %.2f\n",itax);
	}
	else if(s->basic<=100000)
	{
		 hra=((float)(s->basic*35)/100);
	         printf("the hra is %.2f\n",hra);
	         da=((float)(s->basic*20)/100);
        	 printf("the DA is %.2f\n",da);
        	 itax=((float)(s->basic*15)/100);
        	 printf("the income tax is %.2f\n",itax);
	}
	else if(s->basic>100000)
	{
		 hra=((float)(s->basic*40)/100);
	         printf("the hra is %.2f\n",hra);
 	         da=((float)(s->basic*25)/100);
	         printf("the DA is %.2f\n",da);
	         itax=((float)(s->basic*20)/100);
	         printf("the income tax is %.2f\n",itax);
	}
	else
	{
		printf("you have entered wrong details please check it once!\n");

	}
	gsal=s->basic+hra+da;
	printf("the gross salary of employee is %.2f\n",gsal);
	netsal=gsal-itax;
	return netsal;
}
int main()
{
	struct salary e;
	int result;
	printf("enter employee id:",e.id);
	scanf("%d",&e.id);
	printf("enter employee name:",e.name);
	scanf("%s",&e.name);
	printf("enter employee basic salary:",e.basic);
	scanf("%d",&e.basic);
	result=emp_salary(&e);
	printf("the net salary is %d\n",result);
	return 0;
}
