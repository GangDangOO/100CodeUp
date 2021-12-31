#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	int day = 1;
	while (true) {
		if (day % a == 0 && day % b == 0 && day % c == 0) break;
		day++;
	}
	printf("%d", day);

	return 0;
}