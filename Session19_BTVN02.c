#include <stdio.h>

void countEvenOdd(int *arr,int n,int *even,int *odd){
	*even=0;
	*odd=0;
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			(*even)++;
		}else{
			(*odd)++;
		}
	}
}

int main(){
	int n,arr[n];
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int countEven,countOdd;
	countEvenOdd(arr,n,&countEven,&countOdd);
	printf("So phan tu chan: %d\n",countEven);
	printf("So phan tu le: %d",countOdd);
	return 0;
}
