#include<fcntl.h>//파일컨트롤
#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
	char *temp="Test Text Valentis\n";
	int fd;
	
	if (0<(fd = open("./test.txt",O_WRONLY | O_CREAT | O_EXCL, 0644)))
	{
		write(fd, temp, strlen(temp));
		close(fd);
	}
	else{
		printf("파일 열기 실패\n");
	}
	return 0;
}

