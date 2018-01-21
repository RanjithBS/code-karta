#include<stdio.h>
void main() 
{
int i,j,n,k;
int b=0;
int a[10];
scanf("%d",&n);
scanf("%d",&k);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=k;j++)
{
b+=j;
}
printf("%d",b);
}



