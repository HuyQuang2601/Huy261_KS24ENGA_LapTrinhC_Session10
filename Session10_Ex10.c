#include<stdio.h>

int main(){
	int arr[100][100];
	int m,n,i,j,sum;
	printf("Moi ban nhap vao so dong: ");
	scanf("%d",&m);
	printf("\nMoi ban nhap vao so cot: ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++){
	  	for(int j=0;j<n;j++){
	  		printf("Moi ban nhap phan tu arr[%d][%d]: ",i,j);
	  		scanf("%d",&arr[i][j]);
		  }
	}
	
	for(i=m-1; i>0 ;i--){
		for(int a=0;a<n-1;a++){
			for(int j=n-1; j>0 ;j--){
			if(arr[i][j]<arr[i][j]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j];
				arr[i][j]=temp;
			}
		}
	}
}
	
	for(i=0,j=n-1 ;i<m, j>=0 ;i++,j--){
		printf("%d\n",arr[i][j]);
		}
}
