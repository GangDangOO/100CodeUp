#include <stdio.h>

int main() {
	int h, w, x, y, l, d, n;
	int arr[100][100] = { 0, };

	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	while (n != 0)
	{
		n--;
		scanf("%d %d %d %d", &l, &d, &y, &x);
		x--;
		y--;
		for (int i = 0; i < l; i++) {
			if (d == 1) {
				arr[y + i][x] = 1;
			}
			else {
				arr[y][x + i] = 1;
			}
		}
	}
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}