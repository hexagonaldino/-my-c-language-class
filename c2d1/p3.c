#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){

	time_t mytime;
	struct tm *now;

	mytime = time(NULL);
	printf("%ld\n", mytime);

	now = localtime(&mytime);
	printf("%d-%02d-%02d\n",
		now->tm_year+1900,
		now->tm_mon+1,
		now->tm_mday);

	return 0;
}
