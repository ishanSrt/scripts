#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <signal.h>
char greeting[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

void fun(int i)
{
		int fork1 = fork();
		if(fork1<0)
			printf("Error in creating child process\n");
	  	else if(fork1==0)
		{
			if(greeting[i] !='\0')
			{
				printf("%c %d\n", greeting[i], getpid());
				fun(++i);
			}
			else
				return;
		}
}

int main() 
{ 
	int i=0;
	fun(i);
    return 0; 
} 

