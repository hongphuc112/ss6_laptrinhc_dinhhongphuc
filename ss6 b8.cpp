#include<stdio.h>
int main(){
	int thang;
	float tien_ban_dau, lai;
	float tong_tien_lai = 0; 
	float tien_lai = 0;
	printf("Hay nhap so tien gui ngan hang ban dau: ");
	scanf("%f",&tien_ban_dau);
	printf("Hay nhap lai suat thang: ");
	scanf("%f",&lai);
	printf("Hay nhap so thang gui: ");
	scanf("%d",&thang);
	for(int i = 1;i <= thang;i++){
		tien_lai = tien_ban_dau*lai/100;
		tong_tien_lai = tong_tien_lai + tien_lai;
		tien_ban_dau = tien_ban_dau + tien_lai;
	}
	printf("Tien lai: %f\n",tong_tien_lai);
	printf("Tien nhan duoc: %f\n",tien_ban_dau);
	
	return 0;
}
