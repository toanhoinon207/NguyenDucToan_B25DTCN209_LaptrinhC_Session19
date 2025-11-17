#include <stdio.h>

int nhapMang(int *arr,int*n){
	printf("Nhap so luong phan tu: ");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",arr+i);
	}
	return 1;
}

void inMang(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	printf("Cac phan tu trong mang la: ");
	for(int i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}

int tinhDodai(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return 0;
	}
	return n;
}

int tinhTong(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return 0;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*(arr+i);
	}
	return sum;
}

int timMax(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return 0;
	}
	int max=*arr;
    for(int i=0; i<n;i++){
        if(*(arr+i)> max){
            max=*(arr+i);
        }
    }
    return max;
}

int main(){
	int arr[100],n,choice;
	while(1){
		printf("-----------------MENU-----------------\n");
		printf("1. Nhap vao so phan tu va tung phan tu.\n");
		printf("2. Hien thi cac phan tu trong mang.\n");
		printf("3. Tinh do dai mang.\n");
		printf("4. Tinh tong cac phan tu trong mang.\n");
		printf("5. Hien thi phan tu lon nhat.\n");
		printf("6. Thoat.\n");
		printf("--------------------------------------\n");
		printf("Nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhapMang(arr,&n);
				break;
			case 2:
				inMang(arr,n);
				printf("\n");
				break;
			case 3:
				printf("Do dai cua mang la: %d\n",tinhDodai(arr,n));
				break;
			case 4:
				printf("Tong cac phan tu trong mang la: %d\n",tinhTong(arr,n));
				break;
			case 5:
				printf("Phan tu lon nhat trong mang la: %d\n",timMax(arr,n));
				break;
			case 6:
				printf("Thoat chuong trinh!!");
				return 0;
			default:
				printf("Lua chon khong hop le!!");
		}
	}
	return 0;
}
