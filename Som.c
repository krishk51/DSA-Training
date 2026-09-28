#include <stdio.h>

int main() {
    int t, n, digit, place;

    scanf("%d", &t);

    while (t>0) {
        scanf("%d", &n);

        place = 1;
        int count = 0;
        int temp = n;

        while (temp > 0) {
            if (temp % 10 != 0)
                count++;

            temp = temp / 10;
        }

        printf("%d\n", count);

        while (n > 0) {
            digit = n % 10;

            if (digit != 0)
                printf("%d ", digit * place);

            n = n / 10;
            place = place * 10;
        }

        printf("\n");
            t--;

    }

    return 0;
}