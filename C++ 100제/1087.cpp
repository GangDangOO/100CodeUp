#include <stdio.h>

int main() {
	int end;
	int sum = 0;

	scanf("%d", &end);
	for (int i = 1; sum < end; i++) {
		sum += i;
	}
	printf("%d", sum);

	return 0;
}