#include <stdio.h>
int fib(int i);

int main()
{
    int i;
    for ( i = 10; i > 0; i--)
    {
        printf("%d\n",fib(i));

    }
 return 0;
}

int fib(int i){
    if (i==0)
    {
       return 0;
    }
    if (i==1)
    {
        return -1;
    }
   return fib(i-1)+fib(i-2);
}
