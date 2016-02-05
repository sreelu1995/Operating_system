#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int pfd[2];
	int n,m;	
	char buff[10];
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
		read(pfd[0],buff,strlen(buff)+1);		
		int i=atoi(buff);		
		for(n=1;n<=i;n+=2)
			printf("%d ",n);
	}
	else
	{
		close(pfd[0]);
		printf("Enter an integer : ");
		scanf("%s",buff);
		
		write(pfd[1],buff,strlen(buff)+1);
		close(pfd[1]);
	}
printf("\n");
}	
				
