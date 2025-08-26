#include <stdio.h>

int main() {
    int count = 0;
    int num = 2;

    do {
        printf("%d\n", num);
        num += 2;
        count++;
    } while (count < 10);

    return 0;
}
