#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char * argv[])
{
	char message[40];
	if(argc != 2){
		printf("usage: %s <pathname>\n",argv[0]);
		return -1;
	}
	if (access(argv[1],R_OK)<0){
		sprintf(message,"access error for %s",argv[1]);
		perror(message);
	}
	else printf("read access OK\n");
	if(open(argv[1], O_RDONLY)<0){
		sprintf(message,"onen error for %s",argv[1]);
		perror(message);
	}else printf("open for reading OK\n");
	
	return 0;
}

	
