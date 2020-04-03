#include<stdio.h>
#include<string.h>

int main()
{
	char str[] ="almost every programmer should know memset!";
	//memset(str,'-',6);  //almost 초기화 하기 
	memset(str+7,'-',5);  //every 초기화 하기 
	
	puts(str);
	return 0;
}
