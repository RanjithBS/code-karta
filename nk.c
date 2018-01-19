#include<stdio.h>
void main() 
{
int i,n,k;
int b=0;
int a[10];
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{
b=+a[i];
}
printf("%d",b);
}
