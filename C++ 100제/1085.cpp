#include <stdio.h>

int main() {
	double h, b, c, s;
	double MB;

	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	MB = (h * b * c * s) / 8; // ��Ʈ > ����Ʈ
	MB /= 1024; // ����Ʈ > ų�ι���Ʈ
	MB /= 1024; // ų�ι���Ʈ > �ް�����Ʈ
	printf("%.1f MB", MB);

	return 0;
}