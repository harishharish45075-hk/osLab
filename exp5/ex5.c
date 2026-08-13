#include<stdio.h>
#include<signal.h>
#include<unistd.h>

/*
 signal handler function

 this function executes whenever
 the registered signal occurs
*/
void handler(int signal_number)
{
    printf("\nsignal received successfully\n");
    printf("signal number:%d\n",
            signal_number);
} 
int main()
{
 /*
  register SIGNT handler.
  normally SIGINT is generated
  by pressing CTRL+C
 */
 signal(SIGINT,handler);


 printf("current process ID:%d\n",
       getpid());
 printf("generating SIGINT using raise()\n");


 /*
  raise()sends SIGINT signal
  to the same process.
*/
  raise(SIGINT);
  
  printf("\nprogram execution completed\n");

  return 0;
}