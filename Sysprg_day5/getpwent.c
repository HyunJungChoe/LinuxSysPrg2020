#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>
#include<pwd.h>
#include<grp.h>
#include<string.h>

int main()
{
	struct passwd *pass_info =NULL;
	
	while((pass_info = getpwent()) != NULL)
	{
		printf("%12s %d \n",pass_info->pw_name,pass_info->pw_uid);
	}
	return 0;
}

