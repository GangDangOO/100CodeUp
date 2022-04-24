#include <stdio.h>

int main() {
	int x, y;
	x = y = 1;
	int arr[10][10] = { 0, };

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			scanf("%d ", &arr[i][j]);
		}
	}
	while (true) {
		if (arr[y][x] == 2) {
			arr[y][x] = 9;
			break;
		}
		if (arr[y][x + 1] != 1) {
			arr[y][x] = 9;
			x++;
		}
		else if (arr[y + 1][x] != 1) {
			arr[y][x] = 9;
			y++;
		}
		else {
			arr[y][x] = 9;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}