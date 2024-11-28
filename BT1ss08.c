#include<stdio.h>

int main(){
	int arr[]={1,2,3,4,5,6};
	int i, size;
	size = sizeof(arr)/sizeof(arr[0]);
	
	printf("Phan tu cua mang tu cuoi ve dau la: \n");
	for(i=size - 1; i>=0; i--){
		printf("%2d", arr[i]);
	}
	
	
	
	
	
	return 0;
}
