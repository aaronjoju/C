#include <stdio.h>
void swapRef(int*,int*);
// pass by value
int swap(int a, int b)
{
  int c;
  c = a;
  a = b;
  b = c;
  printf("%d %d ", a, b);
}

int main()
{
  int x = 10;
  int y = 20;
  swap(100, 200);
  swapRef(&x, &y);
}
// pass by ref
void swapRef(int *a, int *b)
{
  int c;
  c = *a;
  *a = *b;
  *b = c;
  printf("\nAfter swapping values in function a = %d, b = %d\n", *a, *b); // Formal parameters, a = 20, b = 10
}