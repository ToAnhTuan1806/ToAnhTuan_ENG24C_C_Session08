#include<stdio.h>

int main(){
	
	int arr[3][3] = {{2,6,1}, {1,8,6}, {3,5,7}};
	int sum = 0;
	int i;
	
	printf("Phan tu tren duong cheo chinh cua ma tran la:");
	for(i=0; i<3; i++){
		printf("%2d", arr[i][i]);
		sum += arr[i][i];
	}
	printf("\n");
	printf("\nTong cua cac phan tu tren duong cheo chinh la: %d\n", sum);

	return 0;
}
