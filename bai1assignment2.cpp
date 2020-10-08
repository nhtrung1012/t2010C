#include <stdio.h>
int main(){
	int a;
	printf("nhap so a=");
	scanf("%d",&a);
	
	if(a<2){
		printf(" khong phai ngay trong tuan");
	}else{
		if(a<7){
			printf("day la thu %d",a);
		}else{
			if(a==8){
				printf("day la chu nhat");
			}else{
				printf("day khong phai ngay trong tuan");
			}
		}
	}
}
