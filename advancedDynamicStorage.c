#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){

FILE *fptr_read = NULL;
char str[100];
int i=1;
char *ptr = NULL;
char *ptr1 = NULL;

ptr = malloc(sizeof(str));
ptr1 = ptr;

if((fptr_read = fopen("file.txt","r")) != NULL){
    
    while(fgets(str,sizeof(str),fptr_read)){
        
       if((ptr1 = realloc(ptr,i*sizeof(str))) != NULL){
           printf("Content:%s\n",str);
           strcat(ptr1,str);
           i++;
       }
     }
}
printf("ptr1 valueL%s\n",ptr1);
}