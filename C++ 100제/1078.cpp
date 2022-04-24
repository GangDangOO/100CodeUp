#include <stdio.h>

int main() {
	int i;
	int n = 0;

	scanf("%d", &i);
	for (int j = 0; j <= i; j++) {
		if (j % 2 == 0) {
			n += j;
		}
	}
	printf("%d", n);
	return 0;
}