#include <stdio.h>

int main() {
	int n, x, y;
	int arr[19][19];

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	scanf("%d", &n);
	while (n != 0) {
		n--;
		scanf("%d %d", &x, &y);
		x--;
		y--;
		for (int i = 0; i < 19; i++) {
			if (arr[i][y] == 1) {
				arr[i][y] = 0;
			}
			else {
				arr[i][y] = 1;
			}
		}
		for (int i = 0; i < 19; i++) {
			if (arr[x][i] == 1) {
				arr[x][i] = 0;
			}
			else {
				arr[x][i] = 1;
			}
		}
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}