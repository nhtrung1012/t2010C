#include <stdio.h>
int main(){
	int x,a,b,c,d;
	printf("nhap x= ");
	scanf("%d",&x);
	
	a=x/1000;
	b=(x-a*1000)/100;
	c=(x-a*1000-b*100)/10;
	d=x-a*1000-b*100-c*10;
	
	if (x>0 && x<=9999){
		if (a==0){
			if (b==0){
				if(c==0){
					printf("nhap so %d",d);
				}else{
					printf("nhap so %d%d",d,c);
				}
			}else{
				printf("nhap so %d%d%d",d,c,b);
			}
		}else{
			printf("nhap so %d%d%d%d",d,c,b,a);
		}
	}else{
		printf("sai so")
	}

}
}
