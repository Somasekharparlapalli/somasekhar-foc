#include <stdio.h>
int main() {
    int i, n;
    printf("Enter the number of even numbers to generate: ");
    scanf("%d", &n);
    printf("The first %d even numbers are:\n", n);
    for (i = 2; i <= n; i+=2) {
        printf("%d ", i);
    }
    return 0;
}

