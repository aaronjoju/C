#include <stdio.h>

void add(int, int);
void sub(int, int);
void mul(int, int);
void div(int, int);
int main()
{
    int x, y, z;
    printf("Enter two number");
    scanf("\t\t %d %d", &x, &y);
    printf("Enter your choice\n 1.Add\n2.Sub\n3.mul\n4.div");
    scanf("\t\t %d", &z);
    switch (z)
    {
    case 1:
        add(x, y);
        break;
    case 2:
        sub(x, y);
        break;
    case 3:
        mul(x, y);
        break;
    case 4:
        div(x, y);
        break;

    default:
        printf("enter a valid number");
        break;
    }
}
void add(int a, int b)
{
    int c = a + b;
    printf("\nThe Add Val is %d", c);
}
void sub(int a, int b)
{
    int c = a - b;
    printf("\nThe Add Val is %d", c);
}
void mul(int a, int b)
{
    int c = a * b;
    printf("\nThe mul Val is %d", c);
}
void div(int a, int b)
{
    int c = a / b;
    printf("\nThe div Val is %d", c);
}