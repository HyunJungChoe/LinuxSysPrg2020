#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>
#include<pwd.h>
#include<grp.h>

int main()
{
	struct passwd *u_info;
	struct group *g_info;
	
	u_info = getpwnam("pi");
	g_info = getgrnam("root");
	
	chown("/home/pi/test/test00.txt",u_info->pw_uid,g_info->gr_gid);
	
	return 0;
}

