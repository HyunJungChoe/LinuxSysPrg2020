#include<stdio.h>
#include<string.h>

int main(){
	char str1[255];
	char str2[255];
	int n;
	size_t len1, len2;
	
	printf("Enter a sentence :");
	scanf("%s",str1);
	printf("Enter a sentence :");
	scanf("%s",str2);
	
	len1= strlen(str1);
	len2= strlen(str2);
	
	n= memcmp(str1,str2,len1>len2 ? len1:len2);
	
	if (n >0){
		printf(" '%s' is greater than '%s' (%d).\n",str1,str2,n);
	}else if (n<0){
		printf(" '%s' is less than '%s' (%d).\n",str1,str2,n);
	}else {
		printf(" '%s' is greater than '%s' (%d).\n",str1,str2,n);
	}
	return 0;
}
	
