#include<sys/types.h>
#include<sys/wait.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>

int system(const char *cmdstring)
{
	pid_t pid;
	int status;
	if(cmdstring == NULL)
		return(1);
	if((pid = fork())<0){
		status =-1;
	}
	else if(pid ==0)
	{
		execl("/bin/sh","sh","-c",cmdstring,(char *) 0);
		_exit(127);
	}
	else {
		while(waitpid(pid, &status,0) < 0)
		{
			if(errno != EINTR ){
				status = -1;
				break;
			}
		}
		
	}return (status);
}

int main(void)
{
	int status;
	if((status = system("date")) < 0){
		perror("system() error");
		return -1;
	}
	
	if((status = system("nosuchcommand"))<0){
		perror("system() error");
		return -1;
	}
	
	if((status = system("who; exit 44"))<0){
		perror("system() error");
		return -1;
	}
	
	exit(0);
}

	
