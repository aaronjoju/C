
// 2. Write a program in C to display the cube of the number up to an integer.
#include <stdio.h>
int cube(int num)
{
    return num * num * num;
}
int main()
{
    int num_terms;
    printf("Input number of terms: ");
    scanf("%d", &num_terms);
    for (int i = 1; i <= num_terms; i++)
    {
        int cube_result = cube(i);
        printf("Number is : %d and cube of the %d is : %d\n", i, i, cube_result);
    }
    return 0;
}
