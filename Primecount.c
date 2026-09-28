#include <stdio.h>

int main() {
    int n, digit, prime = 0, composite = 0;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            prime++;
        else if (digit == 4 || digit == 6 || digit == 8 || digit == 9)
            composite++;

        n = n / 10;
    }

    printf("Prime = %d\n", prime);
    printf("Composite = %d", composite);

    return 0;
}