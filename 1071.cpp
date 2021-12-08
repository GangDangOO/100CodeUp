#include <stdio.h>

int main() {
	int i;

reload:
	scanf("%d", &i);
	if (i != 0) {
		printf("%d\n", i);
		goto reload;
	}
	return 0;
}