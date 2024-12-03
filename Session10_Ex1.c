#include <stdio.h>

int main(){
	int n, arr[6]={1,9,3,7,5,2};
	printf("Nhap 1 phan tu bat ki: ");
	scanf("%d", &n);
	for(int i=0; i<6; i++){
		if(n==arr[i]){
		printf("Vi tri cua phan tu la: %d", i+1);
	}
	}
}
