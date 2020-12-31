#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){

    FILE* ftemp = NULL;
    char* readFilePtr = NULL;
    char arr[2500];
    char arr2[1500];

    memset(arr,'\0',sizeof(arr));
    memset(arr2,'\0',sizeof(arr2));

    if((ftemp=fopen("file.txt","r"))== NULL){
        printf("No file called file.txt");
    }
    else{

        readFilePtr =  malloc(100*sizeof(char));
        memset(readFilePtr,'\0',100*sizeof(char));
        /*while(fgets(readFilePtr,10,ftemp)){
            printf("File content:%s\n",readFilePtr);
        }*/
        while(fgets(arr2,sizeof(arr2),ftemp)){
            printf("File content by array:%s",arr2);
            strcat(arr,arr2);
            strcat(readFilePtr,arr2);
        }

        printf("Full content: %s",arr);
        printf("Full content in pointer:%s",readFilePtr);
    }
    
}