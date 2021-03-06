#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<errno.h>

#define SEMPERM 0600
#define TRUE 1
#define FALSE 0

typedef union_semun{
        int val;
        struct semid_ds *buf;
        unshort *array;
}semun;

int initsem(key_t semkey)
{
      int status=0,semid;

       if((semid=semget(semkey,1,SEMPERM|IPC_CREAT|IPC_EXCL))==-1)
           {
                if(errno==EEXIST)
                       semid=semget(semkey,1,0);

           }

      else
        {
            semun arg;
            arg.val=1;

            status=semctl(semid,0,SETVAL,arg);
        }

         if(semid==-1||status==-1)
            {
                perror("initsem failed");
                return -1;
            }
            
           return(semid);

}
