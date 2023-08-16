#include <stdio.h>

void add(int, int);
int main()
{
    int x, y;
    printf("Enter two number");
    scanf("\t\t %d %d", &x, &y);
    add(x, y);
}
void add(int a, int b)
{
    int c = a + b;
    printf("\nThe Value is %d", c);
}