#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/time.h>
#include<pwd.h>

int main()
{
	struct passwd *lpwd;
	printf("UID : %d\n",getuid());
	printf("EUID : %d\n",getuid());

	lpwd = getpwuid(getuid());
	printf("UNAME : %s\n",lpwd->pw_name);
	
	lpwd = getpwuid(getuid());
	printf("EUNAME : %s\n",lpwd->pw_name);
	
	return 0;
}
