#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do {
		printf("nhap so a =");
		scanf("%d",&a);
		printf("nhap so b =");
		scanf("%d",&b);
		printf("nhap so c =");
		scanf("%d",&c);
	}while( a*b*c<=0);
	if (a+b>c && a+c>b && b+c >a){
	
	float p,p1,s;
	p = a+b+c;
	p1=p/2;
	s = p1*(p1-a)*(p1-b)*(p1-c);
	printf("chu vi cua tam giac la %f\n",p);
	printf("dien tich cua tam giac la %f\n", sqrt(s));
	}else 
	printf ("khong phai 3 canh cua tam giac");
}
