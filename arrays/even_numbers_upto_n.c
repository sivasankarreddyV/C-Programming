// to print the even numbers from upto n using arrays
#include <stdio.h>
int main()
{
        int i,n,a[50];
        int k=0;
	printf("enter the number:",n);
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                if(i%2==0)
                {
                        a[k]=i;
                        k++;
                }
        }
        for(i=0;i<k;i++)
        {
                printf("%d\n",a[i]);
        }
        return 0;
}

