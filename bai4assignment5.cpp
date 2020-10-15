#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so a =");
	scanf("%d",&a);
	printf("nhap so b =");
	scanf("%d",&b);
	
	int bcnn=1;
	for(int i=1;;i++){
		if(i%a==0 && i%b ==0){
		
		while (bcnn<i)
		bcnn=i;
		i--;break;
		
		}
		
	}printf("boi chung nho nhat cua %d va %d la %d\n",a,b,bcnn);
	
}
