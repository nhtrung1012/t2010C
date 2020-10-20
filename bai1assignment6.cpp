#include <stdio.h>
int main(){
	int n;
	printf("nhap so n =");
	scanf("%d",&n);
	
	int so[n];
	for (int i=0;i<n;i++){
		printf("so[%d] la ",i);
		scanf("%d",&so[i]);
	}
	int c=0;
	for (int i=0;i<n;i++){
		if(so[i]%2 !=0){
			c=i;
		}
	}
	if(c==0){
		printf("day toan so chan");
	}else{
		printf("so le cuoi cung la %d",so[c]);
	}
	
}
