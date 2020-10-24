#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf ("nhap n= ");
	scanf("%d",&n);
	
	char ars[n][20]; //  mang n chuoi
	for(int i=0;i<n;i++){
		printf("Nhap chuoi %d: ",i);
		scanf("%s",ars[i]);
	}
	// sap xep theo alphabe
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
				
				if (strcmp(ars[j],ars[j+1])>0){
					char ars1[20];
					strcpy(ars1,ars[j]);
					strcpy(ars[j],ars[j+1]);
					strcpy(ars[j+1],ars1);
			}
		}
		
	}
	printf("nhung chuoi vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%3s",ars[i]);
	}
}
