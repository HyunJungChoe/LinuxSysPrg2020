#include<unistd.h>
#include<string.h>
#include<stdio.h>

int main(int argc, char **argv)
{
	if (argc != 3){
		printf("./link [원본 파일] [복사 파일]\n");
		return -1;
	}
	if (access(argv[1],F_OK) != 0){
		printf("원본파일 없음");
		return -1;
	}
	if (access(argv[2],F_OK) == 0){
		printf("이미 원본파일 존재");
		return -1;
	}
	if (link(argv[1],argv[2])==-1) perror("link error");
}

	
