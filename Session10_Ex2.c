#include <stdio.h>

int main(){
	int n,i,j, arr[5]={1,9,7,5,2};
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(arr[j] > arr[i+1]){
				int temp = arr[j];
				arr[j] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	for(i=0; i<5; i++){
		printf("%d \t", arr[i]);
	}	
	
}
