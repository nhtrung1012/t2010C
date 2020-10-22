#include <stdio.h>
#include "header.h">

int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	
	printf("Tong cac chu so cua %d la %d\n",n,TongCacChuSo(n));
	SNTTiep(n);

}
