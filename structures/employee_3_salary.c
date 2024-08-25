#include<stdio.h>
#include<string.h>
struct  emp
{
        int id;
        char name[30];
        int basic;
        float hra;
        float da;
        float itax;
        float gsal;
        float netsal;
};
int main()
{
	struct emp e[100];
	int i,num;
	printf("enter how many employee details:",num);
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		 printf("enter employee id:",e[i].id);
	         scanf("%d",&e[i].id);
	         printf("enter employee name:",e[i].name);
	         scanf("%s",&e[i].name);
	         printf("enter employee basic salary:",e[i].basic);
	         scanf("%d",&e[i].basic);
	         if(e[i].basic<=30000)
	         {

	                e[i].hra=((float)(e[i].basic*20)/100);
	                printf("the hra is %.2f\n",e[i].hra);
	                e[i].da=((float)(e[i].basic*10)/100);
	                printf("the DA is %.2f\n",e[i].da);
	                e[i].itax=((float)(e[i].basic*5)/100);
	                printf("the income tax is %.2f\n",e[i].itax);
	         } 
	         else if(e[i].basic<=50000)
	         {

	                 e[i].hra=((float)(e[i].basic*25)/100);
        	         printf("the hra is %.2f\n",e[i].hra);
                	 e[i].da=((float)(e[i].basic*15)/100);
                	 printf("the DA is %.2f\n",e[i].da);
                 	 e[i].itax=((float)(e[i].basic*10)/100);
                	 printf("the income tax is %.2f\n",e[i].itax);
        	}
       	        else if(e[i].basic<=100000)
        	{
                	 e[i].hra=((float)(e[i].basic*35)/100);
                 	 printf("the hra is %.2f\n",e[i].hra);
                  	 e[i].da=((float)(e[i].basic*20)/100);
                	 printf("the DA is %.2f\n",e[i].da);
                	 e[i].itax=((float)(e[i].basic*15)/100);
                	 printf("the income tax is %.2f\n",e[i].itax);
        	}
        	else if(e[i].basic>100000)
        	{
                	 e[i].hra=((float)(e[i].basic*40)/100);
                 	 printf("the hra is %.2f\n",e[i].hra);
                	 e[i].da=((float)(e[i].basic*25)/100);
                	 printf("the DA is %.2f\n",e[i].da);
                	 e[i].itax=((float)(e[i].basic*20)/100);
                	 printf("the income tax is %.2f\n",e[i].itax);
       		 }	
       		 else
        	 {
                	printf("you have entered wrong details please check it once!\n");

        	 }
        	 e[i].gsal=e[i].basic+e[i].hra+e[i].da;
       		 e[i].netsal=e[i].gsal-e[i].itax;
       		 printf("the gross salary is %.2f\n",e[i].gsal);
       		 printf("the net salary of employee is %.2f\n",e[i].netsal);
	}
       return 0;
}




