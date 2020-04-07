#include<time.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<sys/types.h>

int main()
{
	time_t tm_st;
	time_t tm_nd;
	int tm_day, tm_hour, tm_min, tm_sec;
	double d_diff;
	struct tm user_stime;
	
	user_stime.tm_year = 2007 -1900;
	user_stime.tm_mon = 7-1;
	user_stime.tm_mday = 1;
	user_stime.tm_hour= 10;
	user_stime.tm_min = 12;
	user_stime.tm_sec=55;
	user_stime.tm_isdst=0;
	
	tm_st = mktime(&user_stime);
	time(&tm_nd);
	
	d_diff=difftime(tm_nd,tm_st);
	
	tm_day = d_diff /(60*60*24);
	d_diff=d_diff-(tm_day*60*60*24);
	
	tm_hour = d_diff /(60*60) ;
	d_diff=d_diff-(tm_hour*60*60);
	
	tm_min = d_diff /60;
	d_diff=d_diff-(tm_min*60);
	
	tm_sec = d_diff;
	
	printf("%d %d %d %d\n",tm_day,tm_hour,tm_min,tm_sec);
	return 0;
}

	
	
