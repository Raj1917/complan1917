//find the day on the date for 2016
//An attempt to create my own algorithm for Doomsday, and to test myself
#include <stdlib.h>
#include <stdio.h>

#define MON 3
#define TUE 4
#define WED 5
#define THU 6
#define FRI 0
#define SAT 1
#define SUN 2

#define TRUE 1
#define FALSE 0

int dayofmonth(int doomsday, int month, int day);

int main(int argc, char* argv) {

	int day, displace;
	int month = 1;

	printf("Enter day: ");
	scanf("%d", &day);

	displace = dayofmonth(FRI, month, day);
	printf("The day of the month is %d", displace);

	return 0;

}
//Works with 31 day months
int dayofmonth(int doomsday, int leapyear, int month, int day) {
	int dayofmonth;
	int loop = 0;
		if(month % 2 == 1) {
			dayofmonth = doomsday + (day%7) - 1;;
		}
		else {
			dayofmonth = doomsday + (day%7) - 2;
			((month == 2 && leapyear == TRUE) ? 29 : 28);  
		}
	return dayofmonth;
}
