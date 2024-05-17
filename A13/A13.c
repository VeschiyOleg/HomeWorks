#include <stdio.h>

int main(int argc, char **argv)
{
     int a, b;
    scanf("%d", &a);
    b = ((a/100)%10) * ((a/10)%10) * (a%10);
    printf("%d", b);
    return 0;
}

