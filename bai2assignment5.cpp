#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap so n =");
		scanf("%d",&n);
	}while (n<=2);
	int x1,x2=1,x3=1;
	for(int i=3;x1+x2<=n;i++){
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}printf("so can tim trong day fibo: %d",x2);
}
