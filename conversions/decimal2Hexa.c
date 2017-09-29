#include <stdio.h>

/********Conversion of decimal number to hexadecimal number****************/
void decimal2Hexadecimal(int decimalNumber)
{
	long quotient, remainder;
	int i, j = 0;
	//for 32-bit number
	char hexadecimalnum[8];

		quotient = decimalNumber;

		while (quotient != 0)
		{
			remainder = quotient % 16;
			if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;

			else
			hexadecimalnum[j++] = 55 + remainder;

			quotient = quotient / 16;
		}
		
		printf("It's Hexadecimal equivalent is = ");
		// print the hexadecimal number
		for (i = j-1; i >= 0; i--)
		{
			printf("%c", hexadecimalnum[i]);
		}
}
 
/*** Testing the implementation ***/
int main(){
	
  int input;
  printf("Enter decimal number: ");
  scanf("%d", &input);
  decimal2Hexadecimal(input);

return 0;
}
