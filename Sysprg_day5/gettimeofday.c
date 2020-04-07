#include<sys/time.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main()
{
	struct timeval mytime;
	gettimeofday(&mytime,NULL);
	printf("%ld : %ld\n",mytime.tv_sec,mytime.tv_usec);
	
	//한시간 뒤로 돌려 설정하기 
	mytime.tv_sec -= 3600;
	gettimeofday(&mytime,NULL);
	printf("%ld : %ld\n",mytime.tv_sec,mytime.tv_usec);
	return 0;
}
