#include <stdio.h>

/********Conversion of decimal numbers to octal numbers************/ 
void decimal2Octal(int decimalNumber)
{	
	long quotient;
	//for 32-bit number
    int octalNumber[16];
	int i = 1, j;
    
	quotient = decimalNumber;

    while (quotient != 0)
	{
		octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
	}
	
	printf("It's Octal equivalent is = ");
    for (j = i - 1; j > 0; j--)
	{
		printf("%d", octalNumber[j]);
	}
}

/*** Testing the implementation ***/ 
int main()
{
    int input;
    printf("Enter the decimal number: ");
	scanf("%d", &input);
    decimal2Octal(input);
	return 0;
}
