// to print the sizeof using structures
#include<stdio.h>
#include<string.h>
struct student
{
        int rno;
        char name[20];
        char adress[30];
};
int main()
{

        struct student s;
        struct student *sp;
        sp=&s;
        printf("%d\n",sizeof(s));
        printf("%d\n",sizeof(sp));
        return 0;
}
