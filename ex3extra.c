#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("this is \\a: \a.\n");
	printf("this is a normal line.\n");

	printf("this is \\b: \b.\n");
	printf("this is a normal line.\n");

	//printf("this is \\c: \c.\n");
	printf("this is \\e: \e111111\n");
	printf("this is a normal line.\n");

	printf("this is \\f: \f.\n");
	printf("this is a normal line.\n");

	printf("this is \\r: \r.\n");
	printf("this is a normal line.\n");

	printf("this is \\t: \t.\n");
	printf("this is a normal line.\n");

	printf("this is \\v: \v.\n");
	printf("this is a normal line.\n");

	printf("this is \\U11111111: \U11111111.\n");
	printf("this is a normal line.\n");

	printf("this is %%%%: %%.\n");
	printf("this is a normal line.\n");
	return 0;
}