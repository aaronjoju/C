#include <stdio.h>
#include <math.h>

double calculateSeriesSum(double x, int n) {
    double sum = 0.0;

    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum += pow(x, 2*i + 1);
        } else {
            sum -= pow(x, 2*i + 1);
        }
    }

    return sum * x;
}

int main() {
    double x;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double seriesSum = calculateSeriesSum(x, n);

    printf("Sum of the series [x - x^3 + x^5 + ...] * x is: %lf\n", seriesSum);

    return 0;
}
