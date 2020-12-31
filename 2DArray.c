#include<stdio.h>
#include<string.h>
#include <stdlib.h>


void main(){

    int num[2][10];
    num[0][0] = 1;
    num[1][1] = 2;
    int j;
    for (j=0;j<7;j++){

        num[j][0] = j;

    }

    char str[10][50];
    int i =0;
    char temp[2];

    for (i=0;i<7;i++){

        sprintf(temp,"%d",i);
        strcpy(str[i],temp);

    }

    for (i=0;i<7;i++){

        printf("%s\n",str[i]);

    }
    
}