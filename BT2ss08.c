#include<stdio.h>

int main(){
	int arr[]={1,3,5,7,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int i, user;
	printf("Hay nhap vao 1 phan tu bat ky: ");
	scanf("%d", &user);
	
	for(i=0; i<size; i++){
		if(arr[i] == user){
			printf("Vi tri phan tu trong mang la: %d\n", i);
			break;
		}
	}
	if(i == size){
		printf("\nPhan tu khong ton tai trong mang\n");
	}
	
	return 0;
}
