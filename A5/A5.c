#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float d;
    d = 1.*(a + b + c) / 3;
    printf("%.2f", d);
    return 0;
}

