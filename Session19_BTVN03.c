#include <stdio.h>

float average(int *arr, int n){
    if(n==0){
		return 0;
	}
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(arr+i);
    }
    return (float)sum/n;
}

int main(){
    int n,arr[n];
    printf("Nhap so luong phan tu: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",arr+i);
    }
    printf("Gia tri trung binh cua mang la: %.2f\n",average(arr,n));
    return 0;
}

