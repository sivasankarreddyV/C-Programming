// to print the employee details using structures
#include <stdio.h>
#include <string.h>
struct employee
{
	int id;
	char ename[20];
	int basic;
	float hra;
	float da;
	float Itax;
	float Gsal;
	float netsal;
};
int main()
{
	struct employee e;
	printf("enter the employee details: \n");
	printf("ID: ");
	scanf("%d",&e.id);
	printf("NAME: ");
	scanf("%s",&e.ename); 
	printf("Basic Salary: ");
        scanf("%f", &e.basic);
       	printf("HRA: ");
       	scanf("%f", &e.hra);
	printf("DA: ");
       	scanf("%f", &e.da);
       	printf("Income Tax: ");
      	scanf("%f", &e.Itax);

	e.Gsal=e.basic+e.hra+e.da;
	e.netsal=e.Gsal-e.Itax;
	printf("\nDetails of the employee:\n");
      	printf("Employee ID: %d\n", e.id);
       	printf("Name: %s\n", e.ename);
       	printf("Basic Salary: %.2f\n", e.basic);
      	printf("HRA: %.2f\n", e.hra);
    	printf("DA: %.2f\n", e.da);
       	printf("Gross Salary: %.2f\n", e.Gsal);
    	printf("Income Tax: %.2f\n", e.Itax);
    	printf("Net Salary: %.2f\n", e.netsal);
	return 0;
	}


