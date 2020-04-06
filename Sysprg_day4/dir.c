#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<dirent.h>

int main()
{
	char buffer[256];
	getcwd(buffer, 256);
	printf("%s\n", buffer);
	mkdir("apple",0755);
	chdir("apple");
	
	getcwd(buffer, 256);
	printf("%s\n", buffer);
	chdir("..");
	
	rmdir("apple");
}
