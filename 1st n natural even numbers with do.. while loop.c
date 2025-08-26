#include <stdio.h>

int main() {
    int n, count = 0, num = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
        return 1;
    }

    do {
        printf("%d\n", num);
        num += 2;
        count++;
    } while (count < n);

    return 0;
}
