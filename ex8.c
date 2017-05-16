#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	if (argc == 1)
	{
		printf("You only have one argument, you suck!\n");
	}
	else if (argc > 1 && argc < 4)
	{
		printf("You have more than 1 and less than 4 arguments, you sevive!\n");
		printf("Here are you arguments:\n");
		for (i = 0; i < argc; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	else
	{
		printf("You have too many arguments, you suck!\n");
	}
	return 0;
}