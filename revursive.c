#include<stdio.h>   /*函数申明  */
#define N 50		/*定义常量  */
int sum(int a[],int n);  /* 函数声明 */
void main(){
	int i,n,a[N];
	printf("输入50以内整数");
	scanf("%d", &n);
	for(i=0;i<n;i++)
            a[i]=i+1;
	printf("整数为%d,总数为%d\n",n,sum(a,n));
}

int sum(int a[],int n){
	if(n==0){
	    return 0;
	}else
            return a[n-1]+sum(a,n-1);
}
