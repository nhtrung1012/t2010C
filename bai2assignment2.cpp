#include <stdio.h>
int main(){
	int a;
	printf("nhap so a =");
	scanf("%d",&a);
	
	int b;
	printf("nhap so b =");
	scanf("%d",&b);
	
	if (a>=b){
		int c;
		c = a / b;
		printf("%d",c);
	}else{
		int d;
		d = a*b;
		printf("%d",d);
	}
}
