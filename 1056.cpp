#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	if ((a == 1 && b == 0) || (a == 0 && b == 1))
	{
		printf("%d", 1);
	}
	else {
		printf("%d", 0);
	}

	return 0;
}