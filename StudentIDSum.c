#include <stdio.h>

int main() {
    int id, digit, sum = 0;
    scanf("%d", &id);

    while (id > 0) {
        digit = id % 10;
        sum = sum + digit;
        id = id / 10;
    }

    printf(" %d", sum);

    return 0;
}