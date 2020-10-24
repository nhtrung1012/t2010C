#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n);
	//nhap chuoi n ki tu
	char str[n];
	
		printf("nhap chuoi: ");
		scanf("%s",str);
	//tim nguyen am
	int a=0,b=0;
	for(int i=0;i<strlen(str);i++){ //97  101  105  111  117  65 90
		if(str[i]>=65 && str[i]<=90){
			str[i]+=32;
		}
		if(str[i]==97 or str[i]==101 or str[i]==105 or str[i]==111 or str[i]==117){
			a++;
		}else{
			b++;
		}
	}
	printf("so luong nguyen am la %d , chu khac la %d\n",a,b);
	printf("so chu cai la %d",strlen(str));
}
