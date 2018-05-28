#include<stdio.h>
int sum(int a,int b);

void main(){
	int a,b;
	int (*fun)(int,int);
	printf("enter two number");
	scanf("%d,%d",&a,&b);
	
	printf("%d+%d=%d",a,b,sum(a,b));
	fun=sum;
	printf("%d+%d=%d",a,b,(*fun)(a,b));


}

int sum(int a,int b){
	return a+b;
}
