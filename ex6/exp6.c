#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include <fcntl.h>

int main()
{
    int fd[2];
    pid_t pid;

    char message[]="Hello from parent process";
    char buffer[100];

    /*
     create pipe
     fd[0]->reading end
     fd[1]->writing end
    */
   if(pipe(fd)==-1)
   {
    printf("pipe creation failed\n");
    return 1;
   } 
   /*
    create child process
   */
  pid=fork();
  
  if(pid<0)
  {
    printf("process creation failed\n");
    return 1;
  }
  /*
  child process:
  reads data from pipe
  */
 else if(pid==0)
 {
    close(fd[1]);
    //child does not write
    read(fd[0],buffer,sizeof(buffer));
    printf("\nchild received messge:\n");
    printf("%s\n",buffer);
    close(fd[0]);
 }
 /*
  parent process:
  writes data into pipe
 */
else
{
  close(fd[0]);
  //parent does not read
  write(fd[1],message,strlen(message)+1);
  printf("parent sent message\n");
  close(fd[1]);
}
return 0; 
}