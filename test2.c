#include <stdio.h>
int main() {
	int a, b, c;
	for (a = 1, b = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			c = a * b;
			printf("%d*%d=%d ", a, b, c);
			if (b==9) {
				printf("\n");
			}
		}
	}
	return 0;
}
