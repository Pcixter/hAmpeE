#include <stdio.h>

int main() {
    int day, before, n, i, sum;
    i = 1;
    scanf("%d", &n);
    for (day = n-1; day >= 1; day--) {
        before = (i + 1) * 2;
        i = before;
    }
    printf("%d", i);
    return 0;
}

