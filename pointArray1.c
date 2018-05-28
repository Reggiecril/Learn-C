#include<stdio.h>

void main(){
	char *book[4]={"c promsdd","xdsada","array point","point array"};
	int n=4;
	char *array;
	for(int i=0;i<n;i++)
	printf("第%d哥是%s\n",i+1,book[i]);
	for(n=0,array=book[0];n<4;n++){
		array=book[n];
		printf("第%d个是%s\n",n,array);
}

}
