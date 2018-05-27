#include<stdio.h>
int factorial(int n);
void sum(int n);
#define N 50
void main(){
	int i,n;
	printf("输入n");
	scanf("%d",&n);
	sum(n);
	for(i=0;i<=n;i++)
	    printf("Factorial:!%d=%d\n",i,factorial(i));



}
int factorial(int n){
    if(n==0)
	return 1;
    else
	return n*factorial(n-1); 


}
void sum(int n){
int i,total=1;

for(i=0;i<=n;i++){
 if(i==0)
	total==1;  
 else 
	total*=i;
 printf("Factorial:!%d=%d\n",i,total);

}


}



