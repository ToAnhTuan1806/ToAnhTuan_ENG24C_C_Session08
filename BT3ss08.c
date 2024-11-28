#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao 1 so nguyen bat ky: ");
	scanf("%d", &n);
	
	int arr[n][n];
	printf("Nhap phan tu cho mang:\n");
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Phan tu arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nMang duoi dang ma tran vuong la:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
