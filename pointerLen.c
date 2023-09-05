#include <stdio.h>
int main()
{
    char str[20] = "efgwdfwefew", *ptr;
    int count;
    ptr = str;
    count = 0;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("The length of the string is: %d", count);
    return 0;
}