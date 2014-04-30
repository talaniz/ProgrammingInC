//Building the between 2 dates function

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int main (void)
{
	
	int f, g, n;
	struct date near = { 8, 8, 2004 };
	struct date far  = { 2, 22, 2005 };

	if ( near.month <= 2) {
		f  = 1461 * (near.year - 1) / 4;
		g  = 153 * (near.month + 13) / 5;
		n  = f + g + 3;
	}
	else {
		f = 1461 * (near.year) / 4;
		g = 153 * (near.month + 1) / 5;
		n = f + g + 3;
	}

	printf("The value of f is: %i \n", f);
	printf("The value of g is: %i \n", g);
	printf("The value of n is: %i \n", n);
}
