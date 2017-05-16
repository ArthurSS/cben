#include <stdio.h>
int main()
{
	int i = 25;
	while (i > 0) {
		i--;
		printf("%d ", i);
	}
	printf("\n");
	
	i = 0;
	do {
		printf("%d ", i);
		i++;
	} while (i < 25);
	printf("\n");
}