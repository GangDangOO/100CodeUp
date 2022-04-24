#include <stdio.h>

int main() {
	char c;
	char a = 'a';

	scanf("%c", &c);
	while (a != c) {
		printf("%c ", a);
		a++;
	}
	printf("%c", a);
	return 0;
}