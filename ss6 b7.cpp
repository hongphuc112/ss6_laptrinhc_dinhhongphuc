#include<stdio.h>
int main(){
	int number;
	printf("Hay nhap so nguyen bat ky: ");
	scanf("%d",&number);
	for(int i = 1;i <= number;i++){
		if(number%i == 0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
