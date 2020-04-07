#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>
#include<sys/resource.h>

int main()
{
	struct rlimit rlim;
	getrlimit(RLIMIT_NPROC,&rlim);
	printf("PROC MAX : %lu : %lu\n",rlim.rlim_cur, rlim.rlim_max);
	
	getrlimit(RLIMIT_NPROC,&rlim);
	printf("FILE MAX : %lu : %lu\n",rlim.rlim_cur, rlim.rlim_max);
	
	getrlimit(RLIMIT_NPROC,&rlim);
	if(rlim.rlim_cur == RLIM_INFINITY )
	{
		printf("unlimit");
	}
	
	return 0;
}

