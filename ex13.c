/* Array of Strings! */
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	for (i=1;i<argc;i++) {
		printf("%s.\n", argv[i]);
	}

	//let's make your own array of strings
	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};

	int num_count = 4;
	for (i=0;i<num_count;i++){
		printf("state %d: %s.\n", i, states[i]);
	}
}