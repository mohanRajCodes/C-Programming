#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LINKED_LIST{
    char data[100];
    struct LINKED_LIST* next;
} linked_lst;

void main(){

linked_lst *linked_lst_one  =  NULL;
linked_lst *loop_Linked_lst_one = NULL;
linked_lst *headNode = NULL;
linked_lst *tempNode = NULL;

FILE *fptr_read = NULL;
char str[100];
int i=0;
char *ptr = NULL;
char *ptr1 = NULL;
char str2[100];

ptr = malloc(sizeof(str));
ptr1 = ptr;

linked_lst_one = malloc(1*sizeof(linked_lst));
printf("Address of linked_lst_one:%p\n",linked_lst_one);
headNode = linked_lst_one;
printf("Value of headNode:%p\n",headNode);

if(linked_lst_one != NULL){

        if((fptr_read = fopen("file.txt","r")) != NULL){

            while(fgets(str,sizeof(str),fptr_read)){

                printf("Content:%s\n",str);
        
                if(i==0){
                     strcpy((*linked_lst_one).data,str);
                     (*linked_lst_one).next = NULL;
                     i++;
                }
                else{   
                    i++;
                    tempNode = malloc(1*sizeof(linked_lst));
                    printf("Address of tempNode:%p\n",tempNode);
                    strcpy((*tempNode).data,str);
                    (*tempNode).next = linked_lst_one;
                    headNode = tempNode;
                    printf("Value of headNode:%p\n",headNode);
                    printf("value of next:%p\n",(*tempNode).next);
                    linked_lst_one = tempNode;
                }
            }
        }
        printf("I value:%d\n",i);
        printf("size of str:%d\n",sizeof(str));
        printf("size of i*str:%d\n",i* sizeof(str));
        
        ptr1 = realloc(ptr,(i * 100));
        //printf("size of ptr1:%d\n",sizeof(ptr1));
        memset(ptr1,'\0',sizeof(ptr1));
        //printf("Intial Value of ptr:%s\n",ptr1);

        char str2[i*100];
        memset(str2,'\0',sizeof(str2));
        printf("Value of str2:%s\n",str2);
        printf("Size of str2:%d\n",sizeof(str2));

        loop_Linked_lst_one = headNode;
        while(loop_Linked_lst_one != NULL){
            printf("Linked list value:%s",(*loop_Linked_lst_one).data);
            strcat(str2,loop_Linked_lst_one->data);
            strcat(ptr1,loop_Linked_lst_one->data);
            loop_Linked_lst_one = loop_Linked_lst_one->next;
        }
        printf("Value of ptr:%s\n",ptr);       
        printf("Value of str2:%s\n",str2);
        printf("Size of str2:%d\n",sizeof(str2));
        printf("Value of ptr1:%s\n",ptr1);
    }
}