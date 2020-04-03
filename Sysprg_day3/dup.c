#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *fname = "test.txt";
	int fd1, fd2, cnt;
	char buf[30];
	
	fd1= open(fname,O_RDONLY);
	if(fd1<0)
	{
		perror("open()");
		exit(-1);
	}
	fd2 = dup(fd1);
	
	cnt = read(fd1, buf, 12);
	buf[cnt] = '\0';
	printf("fd1's printf : %s (%d)\n",buf,fd1);
	
	lseek(fd1,1,SEEK_CUR);
	//lseek(fd1,-12,SEEK_CUR);  //fd1과 fd2를 똑같이 만든다.
	//lseek(fd1,0,SEEK_SET);
	cnt=read(fd2,buf,12);
	buf[cnt] = '\0';
	printf("fd2's printf : %s (%d)\n",buf,fd2);
	
}

	
/*
Banana
Apple
Mango
Lemon  
 */

