#include <stdio.h>

int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf ("nhap arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	int m=0;
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			m=i;
		}
	}
	if(m!=0){
		printf("so chan cuoi cung la %d",arr[m]);
	}else{
		printf("day khong co so chan");
	}
}
