#include <stdio.h>

int main() {
    int count = 0;
    int num = 2;

    while (count < 10) {
        printf("%d\n", num);
        num += 2;
        count++;
    }

    return 0;
}
