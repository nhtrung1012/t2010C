int songuyento(int a){
	if(a<2) return 0;
	int c=1;
	for(int i=1;i<a;i++){
		if(a%i==0){
			c++;
		}
	}
	if(c==2){
		return a;
	}else{
		return 0;
	}
}
void Hello(){   //void ham thuc thi, khong tra ve ket qua hoac ket qua trong
	printf("Hello world\n");
	return;
}
bool KiemTraSNT(int n){	// ham bool chi tra ve ket qua dung hoac sai(true or false)
	if(n<2) return false;
	if(n<=3) return true;
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			return false;
		}
	}
}
int tong(int a, int b){  // xac dinh ket qua tra ve co kieu du lieu gi va nhung tham so can cho vao
	int c=a+b;
	return c; 			// c la gia tri can tra ve khi tinh tong
}
// viet ham tim dao nguoc cua 1 so
int daonguoc(int n){
	int x=0;
	while(n!=0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
void InMang(int arr[], int n){
	printf("\nDanh sach mang:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
void NhapMang(int arr[],int n){
	printf("\nNhap gia tri cho mang:\n");
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
}
void SapXep(int arr[],int n,int t){
	// t=1 sap xep be --> lon
	//t=0 sap xep lon --> be
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(t==1){
	
				if(arr[j]>arr[j+1]){
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1]=tmp;
					}
			}else{
				if(arr[j]<arr[j+1]){
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1]=tmp;
					}
			
			}
		}
	}
	return;
}
int SNTTiep(int n){
	for(int i=n+1;true;i++){
		if(KiemTraSNT(i)){
			printf("%d la so nguyen to tiep theo",i);break;
		}else{
			continue;
		}
	}return 0;
}
int TongCacChuSo(int n){
	int tong=0;
	while(n!=0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int UCLN(int a,int b){
	int max=1;
	for(int i=1;i<(a+b);i++){
		if(a%i==0 && b%i==0 ){
			if(max<i){
				max=i;
			}
		}
	}return max;
}
int BCNN(int a,int b){
	int min;
	if(a*b==0){
		min=0;
		return min;
	}else{
		for(int i=a;true;i++){
			if(i%a==0 && i%b==0){
				min =i;break;
			}
		}
		return min;
	}
	
}

