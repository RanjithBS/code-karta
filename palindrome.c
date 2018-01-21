#include <stdio.h>
int main()
{
   int num, reverse=0, remainder,temp;
   scanf("%d", &num);
   temp=num;
   while(temp!=0)
   {
      remainder=temp%10;
      reverse=reverse*10+remainder;
      temp/=10;
   } 
   if(reverse==num) 
      printf("yes");
   else
      printf("no");
   return 0;
}
