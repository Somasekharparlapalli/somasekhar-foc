#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    printf("The sum of the series is: %f\n", sum);

    return 0;
}

