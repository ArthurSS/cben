#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%s\n", "this is a string"); //right
	printf("this is a normal line.\n");

	printf("%c\n", "this is s string"); //wrong
	printf("this is a normal line.\n");

	char s1[] = {'c', 'c', '\0'};
	printf("%s\n", s1); //right
	printf("this is a normal line.\n");

	printf("%c\n", 'c'); //right
	printf("this is a normal line.\n");

	char *s2 = "string";
	printf("the char_num in s2 is %ld\n", sizeof(s2) / sizeof(char));
	printf("now the s2 is %s.\n", s2);
	
	//s2[0] = 'T';
	//s2[6] = '\0';

	printf("now the the first char of s2 is %c.\n", s2[2]);
	if (s2[2] == *(s2+2)) {
		printf("s2[2] == *(s2+2)\n");
	}
	printf("-----------------------\n");

	char s3[] = "string";
	s2 = s3;
	
	printf("the char_num in s3 is %ld\n", sizeof(s3) / sizeof(char));
	printf("now the s3 is %s.\n", s3);
	printf("now the s2 is %s\n", s2);

	s3[0] = 'T';
	s3[6] = 'S';
	printf("now the s3 is %s.\n", s3);
	if (s3[7] == '\0') {
		printf("s3[7] == '\\0'.\n");
	}
	s3[7] = 'S';
	s3[8] = 'S';
	s3[9] = 'S';
	s3[10] = 'S';
	s3[11] = 'S';
	s3[12] = 'S';

	s3[13] = 'S';
	s3[14] = 'S';
	s3[15] = 'S';
	s3[16] = 'S';

	printf("now the s3 is %s.\n", s3);
	printf("now the s2 is %s\n", s2);

	printf("now the s3[16] is %c\n", s3[16]);
	printf("now the s1 is %s\n", s1);

	char s4[] = "this is s4!!";
	s4 = "this is s4!!!";
	//printf("now the s3 is %s.\n", s3);
	//printf("now the s2 is %s\n", s2);

	return 0;
}
