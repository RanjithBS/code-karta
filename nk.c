#include<stdio.h>
int main() 
{
int i,n,k,j;
int b=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=1;i<=n;i++)
{
printf("%d",i);
}
for(j=1;j<=k;j++)
{
b+=j;
}
printf("\n%d",b);
return 0;
}



