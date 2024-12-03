#include<stdio.h>

int main(){
	int arr[100][100];
	int m,n;
	printf("Moi ban nhap vao so dong: ");
	scanf("%d",&m);
	printf("\nMoi ban nhap vao so cot: ");
	scanf("%d",&n);
	
	for(int i=0;i<m;i++){
	  	for(int j=0;j<n;j++){
	  		printf("Moi ban nhap phan tu arr[%d][%d]: ",i,j);
	  		scanf("%d",&arr[i][j]);
		  }
	}
	
	for(int i=0;i<m;i++){
		for(int a=0;a<n-1;a++){
			for(int j=0;j<n-a-1;j++){
			if(arr[i][j]>arr[i][j+1]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
			}
		}
	}
}
	for(int i=0;i<m;i++){
		for(int j=0; j<n;j++){
			printf("%d \n",arr[i][j]);
		}
		printf("\n");
	}
}
