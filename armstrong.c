#include <stdio.h>
int main()
{
    int no, originalNumber, rem, result = 0;
    scanf("%d", &no);
    originalNumber = no;
    while (originalNumber != 0)
    {
        rem = originalNumber%10;
        result += rem*rem*rem;
        originalNumber /= 10;
    }
    if(result == no)
        printf("Yes");
    else
        printf("No");
    return 0;
}
