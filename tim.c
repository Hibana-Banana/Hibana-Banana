#include <stdio.h>
#include <time.h>

int main() {
	int num;
	struct tm* sysTime;
	
	while (1) {
		printf("enter command (for help, enter 0):");
		scanf("%d", &num);
		time_t nowTime;
		time(&nowTime);
		sysTime = localtime(&nowTime);

		switch (num) {
		case 0:
			printf("\n1 for date, 2 for time, 3 to exit.\n\n");
			break;
		case 1: //display the system date
			printf("\n系统日期： %d-%02d-%02d\n\n", 1900 + sysTime->tm_year, sysTime->tm_mon + 1, sysTime->tm_mday);
			break;
		case 2: //display the system time
			printf("\n系统时间： %02d:%02d:%02d\n\n", sysTime->tm_hour, sysTime->tm_min, sysTime->tm_sec);
			break;
		case 3: //exit
			return 0;
		default: //invalid commands
			printf("\ninvalid command!\n\n");
			break;
		}
	}

	return 0;
}