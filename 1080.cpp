#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	scanf("%d", &n);
	int i = 1;
	while (true) {
		if (sum >= n) {
			break;
		}
		else {
			sum += i;
			i++;
		}
	}
	printf("%d", --i);
	return 0;
}