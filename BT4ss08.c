#include<stdio.h>

int main(){
	int arr[2][3] = {{2,6,1}, {1,8,6}};
	int max = arr[0][0];
	
	int i, j;
	for(i=1; i<2; i++){
		for(j=1; j<3; j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}
		}
	
	}
	printf("Phan tu lon nhat trong mang la: %d\n", max);
	
	
	return 0;
}
