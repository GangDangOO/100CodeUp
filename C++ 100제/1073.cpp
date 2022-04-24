#include <stdio.h>

int main() {
	int i;

	while (true) {
		scanf("%d", &i);
		if (i != 0) {
			printf("%d\n", i);
		}
		else {
			break;
		}
	}
	return 0;
}