#include <stdio.h>
#include <string.h>
int main(void) {
  int n,i=0;
  char a[50];
  scanf("%s",&a[i]);
  n=strlen(a);
  for(i=0;i<=n;i++)
  {
  if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
  {
  printf("vowel");
  }
  else
  {
  printf("consonant");
  }
	return 0;
}
}
