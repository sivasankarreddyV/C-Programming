// to print the student details using structures
#include <stdio.h>
#include<string.h>
struct student
{
        int srol;
        char name[20];
        int subj[6];
        int total;
        float avg;
        char result[6];
        char grade[50];
};
int main()
{
        int i;
        struct student s;
        printf("enter the roll no :");
        scanf("%d",&s.srol);
        printf("enter the student name :");
        scanf("%s",&s.name);
        for(i=0;i<6;i++)
        {
                 printf("enter the marks in subject %d: ",i);
                 scanf("%d",&s.subj[i]);
        }
        if (s.subj[0]<35||s.subj[1]<35||s.subj[2]<35||s.subj[3]<35||s.subj[4]<35||s.subj[5]<35)
        {
                strcpy(s.result,"FAIL");
                strcpy(s.grade,"Nill");
        }
        else
        {

                strcpy(s.result,"PASS");
                s.total=s.subj[0]+s.subj[1]+s.subj[2]+s.subj[3]+s.subj[4]+s.subj[5];
                s.avg=s.total/6.0;
                if (s.avg>60)
                {
                        strcpy(s.grade,"first class");
                }
                else if (s.avg>50)
                {
                        strcpy(s.grade,"second class");
                }
                else
                {
                        strcpy(s.grade,"third class");
                }
                printf(" Total is %d\n",s.total);
                printf(" Average is %.2f\n",s.avg);
        }
        printf(" Result is %s\n",s.result);
        printf(" Grade is %s\n",s.grade);

        return 0;
}
