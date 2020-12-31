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
                }
                else{   
                    tempNode = malloc(1*sizeof(linked_lst));
                    printf("Address of tempNode:%p\n",tempNode);
                    strcpy((*tempNode).data,str);
                    (*tempNode).next = NULL;
                    linked_lst_one->next = tempNode;
                    printf("Value of headNode:%p\n",headNode);
                    printf("value of next:%p\n",(*tempNode).next);
                    linked_lst_one = tempNode;
                }
                i++;
            }
        }
        
        ptr1 = (char *) realloc(ptr,(i * sizeof(str)));
        memset(ptr1,'\0',sizeof(ptr1));

        loop_Linked_lst_one = headNode;
        while(loop_Linked_lst_one != NULL){
            //printf("Linked list value:%s",(*loop_Linked_lst_one).data);
            strcat(ptr1,loop_Linked_lst_one->data);
            loop_Linked_lst_one = loop_Linked_lst_one->next;
        }
  
    }
    printf("ptr1:%s\n",ptr1);
}