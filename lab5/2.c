#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int pfd[2];
	int n=100;
	char buff[n];
	int pid;
	if(pipe(pfd) == -1)
	{
		perror("Pipe Failed");
		exit(1);
	}
	if( (pid=fork())==-1)
	{
		perror("Fork Falied");
		exit(2);
	}
	if(pid==0)
	{
		close(pfd[1]);
		read(pfd[0],buff,n);
		int i;
		for(i=0;buff[i]!='\0';i++)
			printf("%c",toupper(buff[i]));
	}
	else
	{
		close(pfd[0]);
		printf("Enter a string : ");
		scanf("%s",buff);
		
		write(pfd[1],buff,strlen(buff)+1);
		close(pfd[1]);
	}
printf("\n");
}	
				
