#include <stdio.h>

int main()
{
	//from char '\num' to plain char 'c', they are the same thing!
	//they have the same type and the same value!
	int a = '\141';
	printf("this is the char '\\141': %c.\n", a);

	a = '\140';
	printf("this is the char '\\140': %c.\n", a);

	a = '\65';
	printf("this is the char '\\65': %c.\n\n", a);

	//from plain char to int, they are not the same thing because they have different type!
	int b = 'a';
	printf("This is int b from 'a': %d.\n\n", b);

	//from char '\num' to int, they are not the same thing because they have different type!
	b = '\141';
	printf("This is int b from '\\141': %d.\n", b);

	b = '\142';
	printf("This is int b from '\\142': %d.\n\n", b);
	
	if ('a' == '\141')
	{
		printf("yes, 'a' == '\\141\', they have the same type and value!\n\n");
	}
	else if ('a' != 97)
	{
		printf("yes, 'a' != 97, they have the different type!\n\n");
	}
	else if (97 != '\141')
	{
		printf("yes, 97 != '\\141', they have the different type!\n\n");
	}
	else
	{
		printf("o, they are not equal at all!");
	}

	//char类型参与数值运算
	//use for loop to see how \nnn can be converted into int type
	char num_char = '\0';
	int num_int = num_char;
	printf("this is num_int from num_char '\\0', %d.\n", num_int);

	num_char = '\1';
	num_int = num_char;
	printf("this is num_int from num_char '\\1', %d.\n", num_int);

	num_char = '\60';
	num_int = num_char;
	printf("this is num_int from num_char '\\60', %d. In ASCII oct 60 represent num 0!\n", num_int);

	num_char = '\3';
	num_int = num_char;
	printf("this is num_int from num_char '\\3', %d.\n", num_int);

	num_char = '\44';
	num_int = num_char;
	printf("this is num_int from num_char '\\44', %d.\n", num_int);

	int result1 = 10 * '\141';
	int result2 = 10 * 'a';
	printf("result1, %d, result2, %d.\n\n", result1, result2);

	//Summary: 在C语言中,'a'和97的含义是一致的,原因是'a'和'\141'等同，而在八进制141就是十进制的97.
	//因此,'a' == '\141'是成立的,而'a' == 97是不成立的.
}