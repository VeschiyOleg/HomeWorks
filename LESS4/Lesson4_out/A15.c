#include <stdio.h>

int main(int argc, char **argv)
{
    int x1, y1, x2, y2;
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    float k, b;
    b = ((1.*x2) * (1.*y1) - (1.*y2) * (1.*x1)) / (x2 - x1);
    k = (y2 - b) /  x2;
    printf("%.2f %.2f", k, b);
    return 0;
}

