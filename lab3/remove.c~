#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#define PERMS 0666 /* RW for owner, group, others */
char buffer[2048];

main(argc,argv)
  int argc;
  char *argv[];
{
   int fdold, fdnew;
	
	if (argc != 2)
	{
 		printf("need 2 arguments for copy program\n"); 
		exit(1);
	}
	fdold = open(argv[1],O_RDONLY); /* open source file in read only */
	if (fdold == -1)
	{
		printf("cannot open file!file does not exist!! %s\n",argv[1]);  
		exit(1);
	}
	
else
        remove(argv[1]);

	exit(0);
}



