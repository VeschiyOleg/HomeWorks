#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b, c, d;
    printf("Input number:\n");
    scanf("%d%d%d", &a, &b, &c);
    d = a + b + c;
    printf("%d+%d+%d=%d", a, b, c, d);
    return 0;
}

