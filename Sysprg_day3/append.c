#include<fcntl.h>//파일컨트롤
#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main(int argc, char ** argv)
{
	int n, in , out;
	char buf[1024];
	
	if (argc != 3)
	{
		write(2, "usage: append file 1 file2 \n",26);
		return -1;
	}
	
	if ((in = open(argv[1], O_RDONLY)) < 0){
		perror(argv[1]);
		return -1;
	}
	
	if ((out = open(argv[2], O_WRONLY | O_APPEND)) <0){
		perror(argv[2]);
		return -1;
	}
	
	while ((n= read(in, buf, sizeof(buf))) > 0) write(out, buf,n);
	
	close(out);
	close(in);
	
	return 0;
}
