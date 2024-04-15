

#include <stdio.h>

int main()
{
    int s;
    scanf("%d", &s);

    s = s - 8;

    for (int i = -2; i < 8; i += 2)
    {
        printf("%d ", s / 5 + i);
    }

    return 0;
}
