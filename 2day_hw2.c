#include <stdio.h>

int main()
{
    int a, b;
    int sum, sub, mul, div, rem;

    printf("a b : ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;
    printf("덧셈 : %d\n뺄셈 : %d\n나눗셈 : %d\n곱셈 : %d\n나머지 : %d\n",sum,sub,div,mul,rem);
    return 0;
}