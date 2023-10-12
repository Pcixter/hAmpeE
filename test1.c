#include <stdio.h>
int judge(int n) {
	int a;
	for (a = 2; a < n; a++) {
		if (n % a == 0)
			return 0;
	}
	return 1;
}
int main() {
	int b;
	for (b = 1; b <= 100; b++) {
		if (judge(b) == 1) {
			printf("%d ", b);
		}
		if (judge(b) == 0) {
			;
		}
	}
}
