#include <stdio.h>

int main() {
	int n, min, rd;

	scanf("%d", &n);
	min = 23;
	for (int i = 0; i < n; i++) {
		scanf("%d", &rd);
		if (min > rd) min = rd;
	}
	printf("%d", min);
	return 0;
}