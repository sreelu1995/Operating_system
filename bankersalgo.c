#include<stdio.h>
#include<stdlib.h>

int main()
{
   int ch;

   printf("BANKER'S ALGORITHM IMPLEMENTATION \n ");
 
   printf("enter your choice:\n 1.Safety algorithm \n 2.Resource request algorithm:\n");
   
   scanf("%d",&ch);
 
 switch(ch)
   {
      case 1:safety_algo(int nop,int nor,int alloc[m][n]);
             break;

      case 2:resreq_algo(int nop,int nor,int alloc[m][n],int rpid,int resreq[]);
             break;

      case 3: display();

      case 4:exit();
   }


return 0;
}

int safety_algo(int nop,int nor,int alloc[m][n])
{
    


}

int resreq_algo(int nop,int nor,int alloc[m][n],int rpid,int resreq[])
{

}
