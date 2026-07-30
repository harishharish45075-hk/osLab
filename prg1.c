#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("linux directory structure\n\n");
    printf("root directory(/):\n");
    system("ls/");
    printf("\nhome directory(/home):\n");
    system("ls/home");
    printf("nETC directory(/etc):\n");
    system("ls/etc");
    printf("\nUSR directory(/usr):\n");
    system("ls/usr");
    printf("nVAR directory(/var):\n");
    system("ls/var");
    return 0;
}