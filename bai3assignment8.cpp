#include <stdio.h>
#include "header.h"

int main(){
	int a,b,c;
	do{
		printf("nhap a= ");
		scanf("%d",&a);
		printf("nhap b= ");
		scanf("%d",&b);

	}while (a*b<=0);
	printf("Uoc Chung Lon Nhat cua %d va %d la %d\n",a,b,UCLN(a,b));
	printf("Boi Chung Nho Nhat cua %d va %d la %d\n",a,b,BCNN(a,b));
}
