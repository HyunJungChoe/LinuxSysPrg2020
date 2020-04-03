#include<fcntl.h>//파일컨트롤
#include<stdio.h>

int main()
{
	int fd;
	char c;
	char *fname ="test.txt";
	int linecnt=0;
	
	if((fd = open(fname,O_RDONLY)) <0){
		perror("open()");
		exit(-1);
		
	}
	for(;;){
		if(read(fd,&c,1)>0){
			if(c=='\n') linecnt++;
		}
		else break;
	}
	printf("Total line : %d\n",linecnt);
	return 0;
}

