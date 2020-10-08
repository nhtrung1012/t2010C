#include <stdio.h>
int main(){
	int t;
	printf ("nhap t =");
	scanf("%d",&t);
	

	int n;
	printf("nhap n =");
	scanf("%d",&n);
	

	
	int d;
	if (t==1){
		printf("hom nay la ngay %d\n",d=n);
	}else{
		if(t==2){
			printf("hom nay la ngay %d\n",d=31+n);
		}else{
			if(t==3){
				printf("hom nay la ngay %d\n",d=31+28+n);
			}else{
				if(t==4){
					printf("hom nay la ngay %d\n",d=31+28+31+n);
				}else{
					if(t==5){
						printf("hom nay la ngay %d\n",d=31+28+31+30+n);
					}else{
						if(t==6){
							printf("hom nay la ngay %d\n",d=31+28+31+30+31+n);
						}else{
							if(t==7){
								printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+n);
							}else{
								if(t==8){
									printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+31+n);
								}else{
									if(t==9){
										printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+31+31+n);
									}else{
										if(t==10){
											printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+31+31+30+n);
										}else{
											if(t==11){
												printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+31+31+30+31+n);
											}else{
												if(t==12){
													printf("hom nay la ngay %d\n",d=31+28+31+30+31+30+31+31+30+31+30+n);
												}else{
													printf("khong phai ngay trong nam\n");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	int m;
	m=d%7;
	if(m !=0){
	  	printf("hom nay la thu %d\n",m+1);
	}else{
		printf("hom nay la ngay chu nhat\n");
	}
}
