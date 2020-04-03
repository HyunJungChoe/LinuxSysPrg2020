#include<fcntl.h>//파일컨트롤
#include<stdio.h>

int main()
{
	char *fname ="test2.txt";
	int fd;
	
	fd = creat(fname,0666);
	if (fd < 0)
		perror("creat()");
	else{
		printf("success!\nFilename : %10s\nDescriptor: %d\n",fname,fd);
		close(fd);
	}
	return 0;
}

