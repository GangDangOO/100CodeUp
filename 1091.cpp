#include <stdio.h>

int main() {
	long a, m, d, n;

	scanf("%ld %ld %ld %ld", &a, &m, &d, &n);
	for (int i = 1; i < n; i++) {
		a *= m;
		a += d;
	}
	printf("%ld", a);

	return 0;
}