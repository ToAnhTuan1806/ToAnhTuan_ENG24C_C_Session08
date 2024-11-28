#include<stdio.h>

int main(){
	// Khai bao va gan gia tri cho mang 2 chieu
	int arr[3][3] = {{2,6,1}, {1,8,6}, {3,5,7}};
	
	// Khai bao bien sum va xu ly tinh toan
	int sum = 0;
	int i, j;
	// Cot dau tien, cot cuoi cung
	for(i=1; i<2; i++){
		sum += arr[i][0];
	}
	for(i=1; i<2; i++){
		sum += arr[i][2];
	}
	// Hang dau tien, hang cuoi cung
	for(j=0; j<3; j++){
		sum += arr[0][j];
	}
	for(j=0; j<3; j++){
		sum += arr[2][j];
	}
	
	printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n ", sum);
	
	return 0;
}
