#include <stdio.h>

int main() {
	int w, h, b;
	float mb;

	scanf("%d %d %d", &w, &h, &b);
	mb = (w * h * b); // 필요 저장공간 bit
	mb /= 8; // bit to byte
	mb /= 1024; // byte to KB
	mb /= 1024; // KB to MB
	printf("%.2f MB", mb);
	return 0;
}