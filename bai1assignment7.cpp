#include <stdio.h>
int main(){
	int n;
	printf("so n= ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("so arr[%d]",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			for(int k=0;k<i-j;k++){
				if(arr[k]>arr[k+1]){
					int tmp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=tmp;
				}
			}
		}
	}
	printf("mang sau khi da sap xep\n");
	for(int i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	int x;
	printf("\n nhap so x= ");
	scanf("%d",&x);
	int c=0;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			c++;
		}else{
			break;
		}
	}
	if(c==0){
		printf("khong co so nao thoa man");
	}else{
		printf("so gan %d nhat la %d",x,arr[c-1]);
	}
	
	
}
