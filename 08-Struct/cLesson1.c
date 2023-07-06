#include <stdio.h>

int main(void){
	
	struct clock{
		int hour;
		int minute;
		int second;
	};
	
	struct clock alarm;
	
	alarm.hour = 14;
	alarm.minute = 32;
	alarm.second = 48;
	
	printf("%i:%i:%i ", alarm.hour, alarm.minute, alarm.second);
	
	return 0;
}
