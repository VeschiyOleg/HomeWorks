#include <stdio.h>

int main(int argc, char **argv)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if(b>a)
       printf("%d %d", a, b);
    else
       printf("%d %d", b, a);
    return 0;
}

