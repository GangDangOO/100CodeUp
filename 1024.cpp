#include <iostream>

int main() {
	char str[20];
	int i = 0;

	scanf("%s", str);
	while (str[i] != '\0')
	{
		printf("'%c'\n", str[i]);
		i++;
	}

	return 0;
}