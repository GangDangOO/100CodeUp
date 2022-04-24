#include <stdio.h>

int main() {
	double h, b, c, s;
	double MB;

	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	MB = (h * b * c * s) / 8; // 비트 > 바이트
	MB /= 1024; // 바이트 > 킬로바이트
	MB /= 1024; // 킬로바이트 > 메가바이트
	printf("%.1f MB", MB);

	return 0;
}