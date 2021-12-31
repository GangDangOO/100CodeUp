#include <stdio.h>


void print(int a) {
	int i;

	scanf("%d", &i);
	a--;
	if (a != 0) print(a);
	printf("%d ", i);
}
int main() {
	int n;
	
	scanf("%d", &n);
	print(n);
	return 0;
}