#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);
	if (a >= 0)
	{
		printf("%s\n", "plus");
	}
	else {
		printf("%s\n", "minus");
	}
	if (a % 2 == 0)
	{
		printf("%s", "even");
	}
	else {
		printf("%s", "odd");
	}

	return 0;
}