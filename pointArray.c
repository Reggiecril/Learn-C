#include<stdio.h>

void main(){
	int a[5]={10,20,30,40,50},*pPtr;
	pPtr=&a[0];
	for(int i=0;i<5;i++)
		printf("输出shuzhu%d\n",a[i]);
for(int i=0;i<5;i++)
                printf("输出shuzhu%d\n",pPtr[i]);
for(int i=0;i<5;i++)
                printf("输出shuzhu%d\n",*(a+i));
for(pPtr=a;pPtr<a+5;*pPtr++)
                printf("输出数组%d\n",*pPtr);


}
