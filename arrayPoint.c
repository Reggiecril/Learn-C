#include<stdio.h>

void main(){
	int a[2][3]={{2,4,5},{3,4,2}};
	int (*aPtr)[3];
	aPtr=a;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++)
		printf("第%d行第%d列=%-3d\n",i,j,*(*(aPtr+i)+j));
}
	for(int i=0;i<2;i++){
                for(int j=0;j<3;j++)
                printf("第%d行第%d列=%p\n",i,j,*(aPtr+i)+j);

}

}
