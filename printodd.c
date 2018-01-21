#include <stdio.h>
int main()
{
int a,b,c,i;
scanf("%d",&a);
scanf("%d",&b);
for(i=++a;i<=b;i++)
{
	if((i%2)!=0)
	{
		printf("\t%d",i);
	}
}return 0;
}
