#include<stdio.h>
#include<string.h>


/*
 문자열 시작 주소부터 15번째 부분부터 11바이트, 
  즉 "very useful" 을 문자열 시작 주소부터 20 번째 ("use~")부분에 복사해 넣는다.
 */
int main(){
	char str[]="memmove can be very useful.......";
	memmove(str + 20, str+15, 11);
	puts(str);
	return 0;
}

