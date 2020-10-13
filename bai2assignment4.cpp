#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap so n =");
		scanf("%d",&n);
	}while (n<=0);
	
	float s=0;
	for (float i=1;i<=n;i++){
		s+=1/i;
	}printf("so tinh la %f",s);
}
