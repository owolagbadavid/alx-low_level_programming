#include <stdio.h>

int main(void)
{
	int intType;
	float floatType;
	long int longIntType;
	char charType;
	long long int longLongInt;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongInt));
 	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	
	return 0;
}
