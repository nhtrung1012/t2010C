#include <stdio.h>
int main(){
	int n;
	printf("nhap so n =");
	scanf("%d",&n);
	
	int so[n];
	for(int i=0;i<n;i++){
		printf("so[%d] =",i);
		scanf("%d",&so[i]);
	}
	int c=0,min=so[0];
	for (int i=0;i<n;i++){
		if (so[i]>0){
			c=so[i];
		}
	}
	for(int i=0;i<n;i++){
		if(so[i]>min && so[i]>0){
			min=so[i];break;
		}
	}
	if (c==0){
		printf("day toan so khong duong\n");
	}else{
		for(int i=0;i<n;i++){
			if(min>so[i] && so[i]>0){
			min=so[i];
			}
		}printf("so duong nho nhat la %d",min);
	}
}
