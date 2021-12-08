#include <stdio.h>

int main() {
	int i;

	scanf("%d", &i);
	for (int n = 0; n <= i; n++) {
		printf("%d\n", n);
	}

	return 0;
}