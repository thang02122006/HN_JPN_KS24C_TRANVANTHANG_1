#include<stdio.h>

int main(){
	int arr[100];
	int choice;
	do{
		printf("\nMENU\n");
		printf("1:nhap so phan tu va gia tri cho mang\n");
		printf("2:in ra cac phan tu trong mang\n");
		printf("3:dem so luong cac so nguyen to trong mang\n");
		printf("4:tim gia tri nho thu hai trong mang\n");
		printf("5:them mot phan tu vao vi tri ngau nhien trong mang\n");
		printf("6:xoa mot phan tu tai vi tri cu the\n");
		printf("7:sap xep mang theo thu tu giam dan\n");
		printf("8:tim kiem phan tu trong mang\n");
		printf("9:xoa toan bo phan tu trung laptrong mang va hien thi toan bo phan tu doc nhat co trong mang\n");
		printf("10:dao nguoc thu tu cac phan tu co o trong mang\n");
		printf("11:thoat.");
		printf("\nmoi ban lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				int rows;
				printf("nhap so phan tu: ");
				scanf("%d",&rows);
				for(int i=0 ; i<rows ; i++){
					printf("nhap gia tri %d: ",i+1);
					scanf("%d",&arr[i]);
				}
				break;
			case 2:
				for(int i=0 ; i<rows ; i++){
					printf("arr[%d]=%d,",i,arr[i]);
				}
				break;
//			case 4:
//				int min=arr[0];
//			    int min_2;
//               for(int i=1 ; i<rows ; i++){
 //               	if(arr[i]<min){
  //             		min=arr[i];
 //              		scanf("%d",&min);
//			        }
//				}
//				for(int i=0 ; i<rows ; i++){
//					if(min_2>arr[i] && arr[i]>min){
//						min_2=arr[i];
//					}
//				}
//				printf("gia tri nho thu hai trong mang la %d",min_2);
//				break;		
			case 5:
				int giatri,vitri,temp;
				printf("nhap gia tri can them vao: ");
				scanf("%d",&giatri);
				printf("nhap vi tri can them vao: ");
				scanf("%d",&vitri);
				for(int i=0 ; i<rows ; i++){
					if(vitri<0 || vitri>rows){
					printf("vi tri khong hop le");
					continue;	
					}
				for(int i=rows ; i>vitri-1 ; i-- ){
					arr[i]=arr[i-1];
				}
				arr[i]=arr[i-1];
				rows++;
				}
			        break;
			case 7:
				for(int i=0 ; i<rows ; i++){
					int bien=arr[i];
					int j=j+1;
					while(j>=0 && arr[j]>=bien){
						arr[j+1]=arr[j];
						j=j-1;
					}
					arr[j+1]=bien;
				}
				printf("thu tu tang dan la :");
				for(int i=0 ; i<rows ; i++){
					printf("%d\t",arr[i]);
				}
			        break;
	    	case 10:
			printf("dao nguoc thu tu cac phan tu trong mang la:");
			for(int i=rows-1 ; i>=0 ; i--){
				printf("%d\t",arr[i]);
			}
			break;
    	}
	}while(choice!=11);
}
