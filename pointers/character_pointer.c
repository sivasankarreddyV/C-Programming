// to print the character pointers
#include<stdio.h>
int main()
{
   char ch = 'W',*p;
   p = &ch;
   printf("Value of ch is: %c\n",ch);
   printf("Value stored at pointer p is: %c\n",*p);
   printf("Address of the variable ch is: %x\n",&ch); 
   printf("p points to the address = %x\n",p);
   printf("Address of the pointer p = %x\n",&p);
   return 0;
}

