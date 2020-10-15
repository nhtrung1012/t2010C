#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so a =");
	scanf("%d",&a);
	printf("nhap so b =");
	scanf("%d",&b);
	
	int ucln=1;
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			
			while(ucln>i)
				i++;
				ucln=i;	
				
			}
				
			 
		}printf("uoc chung lon nhat cua %d va %d la %d\n",a,b,ucln);
	}

