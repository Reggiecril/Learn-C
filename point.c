#include<stdio.h>


void main(){
int q=10;
int *qPtr;
qPtr=&q;

printf("q=%d\n",q);
printf("qPtr=%p\n",qPtr);
printf("*qPtr=%d\n",*qPtr);



}
