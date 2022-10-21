#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

void    print_math(int (*op)(int, int), int x, int y)
{
    int res = op(x, y);

    printf("%d\n", res);
}
int main()
{
    print_math(add, 5, 7);
    print_math(mult, 5, 7); 
}