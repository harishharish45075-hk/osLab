

#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("current directory\n");
    system("pwd");
    printf("\n Files\n");
    system("ls -l");
    printf("\nCreating Directory\n");
    system("mkdir Demo");
    printf("\nListing Files Again\n");
    system("ls");
    printf("\nRemoving Directory\n");
    system("rmdir Demo");
    return 0;
}