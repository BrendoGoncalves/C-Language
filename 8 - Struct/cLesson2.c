#include <stdio.h>

int main(void){
	
	struct clock{
		int hour;
		int minute;
	}alarm1, alarm2 = {11, 32};
	
	alarm1.hour = alarm2.hour * 2;
	alarm1.minute = 32 / 2;
	
	struct clock alarm3 = {14, 27};
	struct clock alarm4 = {alarm4.minute = 41, alarm4.hour = 23};
	
	printf("%i:%i \n", alarm1.hour, alarm1.minute);
	printf("%i:%i \n", alarm2.hour, alarm2.minute);
	printf("%i:%i \n", alarm3.hour, alarm3.minute);
	printf("%i:%i \n", alarm4.hour, alarm4.minute);
	
	return 0;
}
