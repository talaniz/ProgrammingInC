//A program that calculates the time + 1 second

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int second;
};

int main (void)
{

	struct time timeUpdate (struct time now);
	struct time currentTime, nextTime;

	printf("Enter the current time (hh:mm:ss): ");
	scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.second);

	nextTime = timeUpdate(currentTime);

	printf("The updated time is %.2i:%.2i:%.2i \n", nextTime.hour, nextTime.minutes, nextTime.second);

	return 0;
}

struct time timeUpdate(struct time now)
{

	++now.second;

	if (now.second == 60) { //Next minute
		now.second = 0;
		++now.minutes;
		
		if (now.minutes == 60) { //Next hour
			now.minutes = 0;
			++now.hour;

			if (now.hour == 23) //Next day
				now.hour = 0;
		}		
	}
	return now;
}
