#include<stdio.h>
#include<string.h>
//size_t strcmp(const char *s1, const char *s2);

int main()
{
	char buff[] = "note", *pstr="pencil";
	int b=0;
	b =strcmp(buff, pstr);
	printf("strcmp(%s, %s)=> %d\n", buff, pstr, b);
	
	b= strcmp(pstr,buff);
	printf("strcmp(%s,%s)=> %d \n", pstr,buff,b);
	
	b= strcmp(buff,"note1");
	printf("strcmp(%s,%s)=> %d \n", buff,"note1",b);
	
	b= strcmp(buff,"NOTE");
	printf("strcmp(%s,%s)=> %d \n", buff,"NOTE",b);
	
	
	return 0;
}

	
