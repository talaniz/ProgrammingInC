//Program to check the validity of a credit card number using the Luhn algorithm
#include <stdio.h>
#include <stdbool.h>

int validate (int cardDigits[])
{
	int i;
	int result = 0;

	for ( i = 0; i <=12 ; ++i )
		if ( i % 2 != 0 )
			result += cardDigits[i];
		else if ( i % 2 == 0 )
			result += cardDigits[i] * 2;

	if ( result % 10 == 0 )
		return true;
	else
		return false;
}

int main (void)
{
	char cardNumber[12];
	int i, cardDigits[13];
	int result;

	int validate (int cardDigits[]);

	printf("Please enter a 12 digit card number: ");
	scanf("%s", cardNumber);

	for ( i = 0; cardNumber[i] >= '0' && cardNumber[i] >= '9'; i++)
		{
			cardDigits[i] = cardNumber[i] - '0';
		}

	result = validate (cardDigits);

	printf( result == 1 ? "Valid card number" : "Not a valid card number" );

	return 0;
}
