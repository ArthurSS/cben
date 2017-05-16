#include <stdio.h>
int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("You need one argument.");
		return 1;
	}
	
	int i = 0;
	for (i = 0; argv[1][i] != '\0'; i++) {
		char letter = argv[1][i];

		switch (letter) {
			case 'a':
			case 'A':
				printf("%d: 'A'\n", i);
				continue;

			case 'e':
			case 'E':
				printf("%d: 'E'\n", i);
				continue;

			case 'i':
			case 'I':
				printf("%d: 'I'\n", i);
				continue;

			case 'o':
			case 'O':
				printf("%d: 'O'\n", i);
				continue;

			case 'u':
			case 'U':
				printf("%d: 'U'\n", i);
				continue;

			case 'y':
			case 'Y':
				if (i > 2) {
					//it's only sometimes Y
					printf("%d: 'Y'\n", i);
				}
				continue;

			default:
				printf("%d: %c is not a vowel.\n", i, letter);
		}
	}
	return 0;
}