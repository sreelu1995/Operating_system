#include<stdio.h>

int main()
{
    int x,c1pid,c1ppid,y,c2pid,c2ppid;

    x=fork();

    if(x==0)
      {
         printf("\n c1 is created");
         c1pid=getpid();
         c1ppid=getppid();
      }

    else
      {
          printf("\n c1 not created");
      }

   sleep(1);

   y=fork();
   if(y==0)
     {
        printf("\n c2 is created");
        c2pid=getpid();
        c2ppid=getppid();
     }

    else
      {
         printf("\n c2 not created");
      }

    sleep(1);

 if(c1ppid==c2ppid)
    {
      printf("\n heirarchy verified");
    }

  else
   {
     printf("\n heirarchy not verified");
   }
}
