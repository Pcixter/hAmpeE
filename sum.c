#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
int main() {
    long int a, n, i;
    long long s,sum1,sum2;
    scanf("%ld %ld", &a, &n);
    sum2 = a;
    while (n > 1) {
        s = a;
        sum1 = a;
        for (i = n; i > 1; i--) {
            s = s * 10;
            sum1 = sum1 + s;
        }
        sum2 = sum2 + sum1;
        n--;
    }
    printf("%lld\n", sum2);
    return 0;
}
