#include <stdio.h>

struct time
{
	int hour;
	int minute;
	int second;
};


int main (void) 
{
	struct time near = { 9, 44, 3 };
	struct time far  = { 3, 45, 15 };
	struct time diff;

	diff.second  = 60 - far.second;
	diff.second += near.second; 

	if ( diff.second >= 60 ) {
		diff.second -= 60;
		diff.minute  =  1;
	}
	else {
		diff.minute = 0;
	}

	diff.minute += ( 60 - far.minute );
	diff.minute += near.minute;

	if ( diff.minute >= 60 ) {
		diff.minute = 60 - diff.minute;
		diff.hour = 1;
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

	printf("Elapsed time = %i hours, %i minutes, %i seconds\n", diff.hour, diff.minute, diff.second);     

}
