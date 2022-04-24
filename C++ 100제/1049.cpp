#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("%d", 1);
	}
	else if (a <= b) {
		printf("%d", 0);
	}

	return 0;
}