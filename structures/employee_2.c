// to print the employee details using structures
#include <stdio.h>
#include <string.h>

struct emp
{
    int id;
    char name[30];
    float salary;
    char address[50];
    
};

    int main()
    {
        struct emp e[2]; 
        int i;
        printf("\n Enter Employee Details like id name salary and Address: ");
        for(i=0;i<2;i++)
        {
            scanf("%d",&e[i].id);
            scanf("%s",&e[i].name);
            scanf("%f",&e[i].salary);
            scanf("%s",&e[i].address);
        }
        printf("\n Employee Details are");
        for(i=0;i<2;i++)
        {
            printf("ID: %d\n",e[i].id);
            printf("NAME: %s\n",e[i].name);
            printf("SALARY: %f\n",e[i].salary);
            printf("ADDRESS: %s",e[i].address);
        }
        return 0;
    }
