//Program to calculate between two dates

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int main (void)
{
	
	int nearN, farN, diff;
	struct date nearDate, farDate;	
	int convertN (struct date d);

	printf("Enter the near date: ");
	scanf("%i%i%i", &nearDate.month, &nearDate.day, &nearDate.year);

	printf("Enter the far date: ");
	scanf("%i%i%i", &farDate.month, &farDate.day, &farDate.year);

	nearN = convertN(nearDate);
	farN  = convertN(farDate);

	diff = farN - nearN;
	
	printf("Elapes days = %i \n", diff);
	
	return 0;
}

int convertN (struct date d)
{
	
	int f, g, n;			

	if (d.month <= 2) { 
		f = 1461 * (d.year - 1) / 4;
		g = 153 * (d.month + 13) / 5;
		n = f + g + d.day;
	}
	else {
		f = 1461 * (d.year) / 4;
		g = 153 * (d.month + 1) / 5;
		n = f + g + d.day;
	}

	return n;
}
