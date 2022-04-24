#include <stdio.h>

int main() {
	int a, b, c, answer;

	scanf("%d %d %d", &a, &b, &c);
	answer = ((a > b ? b : a) > c ? c : (a > b ? b : a));
	printf("%d", answer);
	return 0;
}