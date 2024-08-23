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
        struct emp e;
        e.id=10;
        strcpy(e.name,"siva");
        strcpy(e.address,"vempalli,kadapa");
        e.salary=45000.00;
        printf("ID: %d\n",e.id);
        printf("NAME: %s\n",e.name);
        printf("SALARY: %f\n",e.salary);
        printf("ADDRESS: %s",e.address);
        return 0;
    }
