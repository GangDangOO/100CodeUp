#include <stdio.h>

int main() {
	int i;

	scanf("%d", &i);
	while (i != 0) {
		--i;
		printf("%d\n", i);
	}

	return 0;
}