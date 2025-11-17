#include <stdio.h>
#include <math.h>

int nhapMang(int *arr,int*n){
	printf("Nhap so luong phan tu: ");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",arr+i);
	}
	return 1;
}

void inChan(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	printf("Cac phan tu chan trong mang la: ");
	for(int i=0;i<n;i++){
		if(*(arr+i)%2==0){
			printf("%d ",*(arr+i));
		}
	}
}

int isPrime(int x){
	if(x<2){
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}

void inPrime(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	printf("Cac phan tu la so nguyen to: ");
	for(int i=0;i<n;i++){
		if(isPrime(*(arr+i))){
			printf("%d ",*(arr+i));
		}
	}
}

void daoNguoc(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	int l=0,r=n-1;
	while(l<r){
		int temp=*(arr+l);
		*(arr+l)=*(arr+r);
		*(arr+r)=temp;
		l++;
		r--;
	}
}

void sapxepTang(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(arr+j)<*(arr+i)){
				int temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}

void sapxepGiam(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(arr+j)>*(arr+i)){
				int temp=*(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=temp;
			}
		}
	}
}

void timKiem(int *arr,int n){
	int x;
    printf("Nhap phan tu can tim: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(*(arr + i)==x){
            printf("Tim thay %d tai vi tri %d.\n",x,i);
            return;
        }
    }
    printf("Khong tim thay!!\n");
}

void inMang(int *arr,int n){
	if(n==0){
		printf("Mang rong!\n");
		return;
	}
	for(int i=0;i<n;i++){
		printf("%d ",*(arr+i));
	}
}

int main(){
	int arr[100],n,choice;
	while(1){
		printf("-----------------MENU-----------------\n");
		printf("1. Nhap vao so phan tu va tung phan tu.\n");
		printf("2. In ra cac phan tu la so chan.\n");
		printf("3. In ra cac phan tu la so nguyen to.\n");
		printf("4. Dao nguoc mang.\n");
		printf("5. Sap xep mang.\n");
		printf("6. Tim kiem phan tu trong mang.\n");
		printf("7. Thoat.\n");
		printf("--------------------------------------\n");
		printf("Nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				nhapMang(arr,&n);
				break;
			case 2:
				inChan(arr,n);
				printf("\n");
				break;
			case 3:
				inPrime(arr,n);
				printf("\n");
				break;
			case 4:
				daoNguoc(arr,n);
				printf("Mang sau khi dao nguoc: ");
				inMang(arr,n);
				printf("\n");
				break;
			case 5:{
				int a;
				printf("---SAP XEP---\n");
				printf("1. Tang dan\n");
				printf("2. Giam dan\n");
				printf("Chon kieu sap xep: ");
				scanf("%d",&a);
				if(a==1){
					sapxepTang(arr,n);
					printf("Mang sau khi sap xep: ");
					inMang(arr,n);
					printf("\n");
				}else if(a==2){
					sapxepGiam(arr,n);
					printf("Mang sau khi sap xep: ");
					inMang(arr,n);
					printf("\n");
				}else{
					printf("Lua chon khong hop le");
				}
				break;
			}
			case 6:
				timKiem(arr,n);
				break;
			case 7:
				printf("Thoat chuong trinh!!");
				return 0;
			default:
				printf("Lua chon khong hop le!!");
		}
	}
	return 0;
}
