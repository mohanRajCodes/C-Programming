#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){

    char *c_ptr = NULL; //You are initializng it as pointer and 4 bytes allocated and c_ptr value is NULL(nothing but c_ptr = NULL..dont confuse "*" here.)
    c_ptr = "H"; //You are storing "H" in the 4 bytes
    printf("*c_ptr:%s\n",c_ptr);
    printf("c_ptr :%d\n",c_ptr);

    char c = 'H'; //1 bytes assigned for character
    c_ptr = &c; //Now the address of the "c" is stored in the pointer
    printf("*c_ptr:%c\n",*c_ptr); //You need to derefernce the address to get the value os "*" is used
    printf("c_ptr:%c\n",c_ptr); //Without dereferencing the value , you will get garbage
    printf("c_ptr :%d\n",c_ptr); 

    printf("*********Strings and pointers*****\n");
    char str[12] = "Hello world";// 12 * 1 = 12 bytes and return the address to str[0]..Remember str is a constant pointer [i.e the address wont change until the end of program execution]
    
    printf("Address of str : %p\n",str); // value = "0061FEBB"
    printf("size of str : %d\n",sizeof(str));
    c_ptr = str; /* are you storing the address of str or "Hello world" in 4 bytes of pointer ? 
    - you are using c_ptr without dereferencing sign(*), so you should asign an address to it.
    ..as shown below by %p,c_ptr, it is the address of str that is stored in c_ptr..
    You need not use "&" here because str itself an constant pointer[i.e array] that is storing address of starting character
    */
    printf("c_ptr by percentage s:%s\n",c_ptr); /*But why you are not deferencing c_ptr to printer?
    - %s already capable to convert the address to its value ..For example: we dont dereference array to print its value
    */
    printf("c_ptr by percentage c:%c\n",*c_ptr); //Now you are using %c , so you need to dereference.
    printf("*c_ptr by percentage d:%d\n",*c_ptr);  // you are printing ascii value of "H"[first value]

    printf("c_ptr by percentage d :%d\n",c_ptr); //you are printing ascii value of string 
    printf("c_ptr[0]:%c\n",c_ptr[0]); 
    printf("c_ptr percentage p:%p\n",c_ptr); //ctr = 0061FEBB (address of str) 
    printf("Address of c_ptr percentage p:%p\n",&c_ptr);

    int i;
    printf("size of c_ptr:%d\n",sizeof(c_ptr));
    for (i=0; i<sizeof(c_ptr);i++){

        printf("c_ptr at element[%d]:%c\n",i,c_ptr[i]);
    }

    c_ptr = "Hello World";
    printf("c_ptr:%c\n",c_ptr[0]); 

}
