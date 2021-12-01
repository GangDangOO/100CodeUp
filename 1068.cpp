#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);
	if (a >= 0 && 39 >= a) {
		printf("%s", "D");
	}
	else if (a >= 40 && 69 >= a) {
		printf("%s", "C");
	}
	else if (a >= 70 && 89 >= a) {
		printf("%s", "B");
	}
	else if (a >= 90 && 100 >= a) {
		printf("%s", "A");
	}

	return 0;
}