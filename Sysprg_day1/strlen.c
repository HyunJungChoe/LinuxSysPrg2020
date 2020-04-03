#include<string.h>
#include<stdio.h>


int main()
{
	char buff[100]="note";
	
	char * pstr = buff;
	int len;
	
	len = strlen(buff);
	printf("strlen(buff) : %d \n",len);
	
	len = strlen(pstr);
	printf("strlen(pstr) : %d \n",len);
	
	len = strlen("A book");
	printf("strlen(A book) : %d \n",len);
	
	len = strlen(&buff[2]);
	printf("strlen(&buff[2]) : %d \n",len);
	
	len = strlen("대한민국");
	printf("strlen(\"대한민국\") : %d \n",len);
		
}

