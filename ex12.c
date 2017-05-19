/* Sizes and Arrays */
#include <stdio.h>
int main(int argc, char *argv[]) {
	int areas[] = {10, 12, 13, 14, 20};
	char *name = "Zed";
	char full_name[] = {
		'Z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
	};

	//WARNING: On some systems you may have to chage the
	// %ld in the cod to a %u since it will use unsigned ints
	printf("The size of an int is: %ld.\n", sizeof(int));
	printf("The size of areas is: %ld.\n", sizeof(areas));
	printf("The number of ints in areas: %ld.\n", sizeof(areas) / sizeof(int));

	printf("The size of a char: %ld.\n", sizeof(char));
	printf("The size of name (char[]): %ld.\n", sizeof(name));
	int i;
	for (i=0;i<sizeof(name)/sizeof(char);i++) {
		printf("name[%d] is %c.\n", i, name[i]);
	}
	printf("The number of chars in name: %ld.\n", sizeof(name) / sizeof(char));

	printf("The size of full_name (char[]): %ld.\n", sizeof(full_name));
	printf("The number of chars in full_name: %ld.\n", sizeof(full_name) / sizeof(char));

	printf("name = \"%s\", full_name = \"%s\".\n", name, full_name);

	return 0;
}