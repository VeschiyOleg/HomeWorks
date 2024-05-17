#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d, max;
    scanf("%d", &a);
    b = (a/100)%10;
    c = (a/10)%10;
    d = a%10;
    max = b > c ? b : c;
    max = max > d ? max : d;
    printf("%d", max);
    return 0;
}

