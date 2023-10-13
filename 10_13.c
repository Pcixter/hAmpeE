#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)
#define MAX_DIGITS 10005
void add(int num1, int num2[], int result[]) {
	for (int i = 0; i < 10005; i++) {
		int sum = num1 + num2[i];
		result[i] = sum;
	}
}
int main() {
	int n,a,s;
	int sum[10005] = { 0 };
	scanf("%d", &n);
	while (n >= 1) {
		a = n;
		for (s = 1; a > 1; a--) {
			s = s * a;
		}
		add(s, sum, sum);
		n--;
	}
	printf("%d", sum[10005 - 1]);
	return 0;
}