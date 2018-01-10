#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if(year % 4 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
