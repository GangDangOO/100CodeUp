#include <stdio.h>

int main() {
	int n, r;
	int a[23] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &r);
		a[--r]++;
	}
	for (int i = 0; i < 23; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}