#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    printf("b : ");
    scanf("%d", &c);
    d = (a+b)/c;
    e = (a/c + b/c)/c;
    printf("%d\n%d\n",d,e);
    return 0;
}
