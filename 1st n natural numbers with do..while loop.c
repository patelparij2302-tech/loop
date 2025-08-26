#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
