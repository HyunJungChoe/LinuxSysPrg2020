#include<fcntl.h>//파일컨트롤
#include<stdio.h>

int main(){
	char * fname = "test.txt";
	int fd;
	
	fd = open(fname, O_RDONLY);
	if(fd <0)
		perror("open()");
	else{
		printf("success!\nFilename : %10s\nDescriptor: %d\n",fname,fd);
		close(fd);
	}
	return 0;
}

