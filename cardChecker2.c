//Program to implement the Luhn algorithm for checking credit cards

#include <stdio.h>

int validate (int cardDigits[])
{

	int i, result = 0;
	
	for ( i = 0; i < 16; ++i )
	{
		if ( i % 2 != 0 )
		{
			result += cardDigits[i];
		}
		else
		{
			if ((cardDigits[i] * 2) >= 10)
			{
				result += (cardDigits[i] * 2) / 10; //adds digit in the tens place
				result += (cardDigits[i] * 2) % 10;     //adds digit in the ones place	
			}
			else
			{
				result += cardDigits[i] * 2;
			}
		}
	}
	
	printf("%i\n", result);	
	//Determine if the card number is valid
	if ( result % 10 == 0 )
		return 1;
	else
		return 0;
}

int main (void)
{
	char cardNumber[17];
	int i, result, cardDigits[16];

	int validate (int cardDigits[]);

	printf("Please enter a card number: ");
	scanf("%s", cardNumber);

	//Convert each digit in the string to an integer
	for ( i = 0; cardNumber[i] >= '0' && cardNumber[i] <= '9'; ++i )
		cardDigits[i] = cardNumber[i] - '0'; // ex. char '9' = int 9

	result = validate (cardDigits);

	printf(result == 1 ? "Card number is valid\n" : "Card number is not valid\n");

	return 0;
}
