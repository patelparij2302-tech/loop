#include <stdio.h>

int main() {
    int n, count = 0, num = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (count < n) {
        printf("%d\n", num);
        num += 2;
        count++;
    }

    return 0;
}
