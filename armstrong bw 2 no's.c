#include <stdio.h>
#include <math.h>
int main()
{
    int low, high, l, tmp1, tmp2, remainder, n = 0, result = 0;
    scanf("%d %d", &low, &high);
    for(l = low + 1; l < high; ++l)
    {
        tmp2 = l;
        tmp1 = l;
        while (tmp1 != 0)
        {
            tmp1 /= 10;
            ++n;
        }
        while (tmp2 != 0)
        {
            remainder = tmp2 % 10;
            result += pow(remainder, n);
            tmp2 /= 10;
        }
        if (result == l) {
            printf("%d ", l);
        }
        n = 0;
        result = 0;
    }
    return 0;
}
