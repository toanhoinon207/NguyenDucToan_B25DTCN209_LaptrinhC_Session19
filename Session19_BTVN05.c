#include <stdio.h>

int compareArrays(int *a,int *b,int n){
	for(int i=0;i<n;i++){
		if(*(a+i)!=*(b+i)){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	printf("Nhap so luong phan tu cua 2 mang: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Nhap cac phan tu mang a\n");
	for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",a+i);
    }
    printf("Nhap cac phan tu mang b\n");
	for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",b+i);
	}
	return 0;
}

