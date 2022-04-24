#include <stdio.h>

int main() {
	int i;
	int n;

	scanf("%d", &n);
reget:
	scanf("%d", &i);
	if (n-- != 0) {
		printf("%d\n", i);
		goto reget;
	}

	return 0;
}