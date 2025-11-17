#include <stdio.h>

void copyArray(int *src,int *dest,int n){
    for(int i=0;i<n;i++){
        *(dest+i) = *(src+i);
    }
}

void printArray(int *arr,int n) {
    for(int i = 0; i<n; i++) {
        printf("%d",*(arr+i));
        if(i<n-1){
			printf(" ");
		}
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    int A[n], B[n];
    printf("Nhap cac phan tu mang A\n");
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",A+i);
    }
    copyArray(A,B,n);
    printf("Mang B: ");
    printArray(B,n);
    return 0;
}

