#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap so n =");
		scanf("%d",&n);
	}while(n<=0);
	int s=0;
	for (int i=1;i<=n;i++){
		if(i%2 !=0){
			s+=i;
		}
	}printf ("tong 100 so le dau tien la %d",s);
}
