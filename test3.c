#include <stdio.h>
int main(){
	int a, b, c, m;
	for (m = 100; m <= 999; m++) {
			a = m % 10;
	b = ((m - a) % 100)/10;
	c = (m - a - b) / 100;
	if (m == a * a * a + b * b * b + c * c * c) {
		printf("%d ", m);

	}
	}
	return 0;
}
