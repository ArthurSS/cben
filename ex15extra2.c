#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int char_num;
	int char_pointer_num;

	//---------------char array(string)---------------
	char char_array[] = "Zed";
	char_num = sizeof(char_array) / sizeof(char);

	//print the char_array directly
	printf("the char_array is %s\n", char_array);
	printf("char_num is %ld\n", char_num);

	//print the char_array char by char
	for (i=0; i<char_num; i++) {
		printf("char %d is %c\n", i, char_array[i]);
	}
	printf("\n");
	
	//-------------pointer to a string---------------
	char *char_pointer = "Zdssssssssssssssss";
	char_pointer_num = sizeof(char_pointer) / sizeof(char);

	//print the char_pointer directly
	printf("the char_pointer is %s\n", char_pointer);
	printf("char_pointer_num is %ld\n", char_pointer_num);

	//print the char_pointer char by char
	for (i=0; i<char_pointer_num; i++) {
		printf("char %d is %c\n", i, char_pointer[i]);
	}
	printf("\n");

	//---------------string array-----------------
	char string_array[10][10] = {"Arthur", "Zed", "Jone"};
	char_num = sizeof(string_array) / sizeof(char);

	//print the string_array directly
	printf("the string_array is %s\n", string_array[0]);
	printf("char_num is %ld\n", char_num);

	//print the string_array char by char
	for (i=0; i<10; i++) {
		printf("string %d is %s\n", i, string_array[i]);
	}
	printf("\n");

	//---------------string array-----------------
	char *pointer_array[] = {"Arthur", "Zed", "Jone"};
	char_num = sizeof(pointer_array) / sizeof(char);

	//print the pointer_array directly
	printf("the pointer_array is %s\n", pointer_array[0]);
	printf("char_num is %ld\n", char_num);

	//print the pointer_array char by char
	for (i=0; i<10; i++) {
		printf("string %d is %s\n", i, pointer_array[i]);
	}
	printf("\n");

	return 0;
}