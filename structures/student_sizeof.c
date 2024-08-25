#include<stdio.h>
#include<string.h>
struct student {
    int rno;
    char name[29];
    char address[20];
};
struct student s;
int main(){
    struct student *sp;
    sp=&s;
    sp->rno=1;
    strcpy(sp->name, "sivasankarreddy vaddamani" );
    printf(" ");
    strcpy(sp->address, "kadapa");
    printf("%d",sp->rno);
    printf("%s",sp->name);
    printf("%s",sp->address);
    printf("\n ");
    printf("%lu",sizeof(struct student));
}
