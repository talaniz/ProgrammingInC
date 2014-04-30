//Program to calculate the difference between 2 times

#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};	

int main (void)
{
	struct time diff, near, far;
	struct time getDiff(struct time near, struct time far);

	printf("Enter the time you came home: (hh:mm:ss) ");
	scanf("%i:%i:%i", &near.hour, &near.minute, &near.second);

	printf("Enter the time you left: (hh:mm:ss:) ");
	scanf("%i:%i:%i", &far.hour, &far.minute, & far.second);

	diff = getDiff(near, far);

	printf("Elapsed time is %i hours, %i minutes and %i seconds\n", diff.hour, diff.minute, diff.second);

}

struct time getDiff(struct time near, struct time far)
{
	
	struct time diff;

	diff.second  = 60 - far.second;
	diff.second += near.second;
	
	if ( diff.second >= 60 ) {
		diff.second -= 60;
		diff.minute  = 1;
	}
	else {
		diff.minute = 0;
	}

	diff.minute += ( 60 - far.minute );
	diff.minute += near.minute;

	if ( diff.minute >= 60) {
		diff.minute = 60 - diff.minute;
		diff.hour   = 1;
	}
	else {
		diff.hour = 0;
	}
	
	if ( near.hour < far.hour ) {
		diff.hour += ( 23 - far.hour ) + near.hour;
	}
	else {
		diff.hour += ( near.hour - far.hour ) - 1;
	}

	return diff;
}





