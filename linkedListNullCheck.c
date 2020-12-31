#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct LINKO{
    int vendor;
    char pack_nbr[20];
    struct LINKO* next;
}linkList;

int main(){
    linkList *linkList_1 = NULL;
    linkList_1 = calloc(1,sizeof(linkList ));

    printf("vendor number:%d\n",(*linkList_1).vendor);
    printf("vendor number:%d\n",linkList_1->vendor);
    printf("pack_nbr:%s\n",(*linkList_1).pack_nbr);

    linkList *linkList_2 = NULL;
    linkList_2 = malloc(1*sizeof(linkList));

    printf("vendor number:%d\n",(*linkList_2).vendor);
    printf("pack_nbr:%s\n",(*linkList_2).pack_nbr);
}