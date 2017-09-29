#include <stdio.h>

/***Convert decimal numbers to binary numbers****************/
void decimal2Binary(int decimalNumber)
{
	
	long remainder;
	long base = 1; 
	long binary = 0; 
	long no_of_1s = 0;
	//Check whether number is less than zero
	while (decimalNumber > 0)
	{
		remainder = decimalNumber % 2;
			  
		if (remainder == 1)
		{
			no_of_1s++;
		}
		binary = binary + remainder * base;
		decimalNumber = decimalNumber / 2;
		base = base * 10;
	}
	printf("It's binary equivalent is = %ld", binary);

}

/*** Testing the implementation ***/
int main()
{	
    int input;
    printf("Enter a decimal integer: ");
    scanf("%d", &input);
    decimal2Binary(input);
	return 0;
} 
