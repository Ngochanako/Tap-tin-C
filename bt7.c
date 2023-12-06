#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Book{
	char code[20];
	char name[50];
	char author[50];
	int price;
	char category[50];
};
typedef struct Book B;
//ham nhap phan tu cua mang
void input(B list[],int i){
	printf("Nhap ma sach:");
	scanf("%s",list[i].code);
	printf("Nhap ten sach:");
	scanf("%s",list[i].name);
	printf("Nhap tac gia:");
	scanf("%s",list[i].author);
	printf("Nhap gia sach:");
	scanf("%d",&list[i].price);
    printf("Nhap danh muc:");
    scanf("%s",list[i].category);
}
//ham in phan tu mang
void print(B list){
	printf("%10s %20s %20s %10d %20s",list.code,list.name,list.author,list.price,list.category);
}
//ham in mang
void printN(B list[],int n){
	for(int i=0;i<n;i++){
		print(list[i]);
		printf("\n");
	}
}
int main(){
	int choice;
	B listBook[100];
	B list;
	int n,currentIndex=0;
	FILE*f=NULL;
	do{
		printf("\n1.Nhap so luong va thong tin sach\n");
		printf("2.Nhap thong tin sach vao file\n");
		printf("3.Hien thi thong tin sach tu file\n");
		printf("4.Thoat\n");
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:
				printf("Nhap so luong sach:");
				scanf("%d",&n);
				for(int i=0;i<n;i++){
					input(listBook,currentIndex);
					++currentIndex;
				}
				printN(listBook,currentIndex);
				break;
			case 2:				
				f=fopen("bt7.txt","w");
				if(f==NULL){
					printf("INVALID");
					exit(0);
				}				
				for(int i=0;i<currentIndex;i++){
					fprintf(f,"%10s %20s %20s %10d %20s\n",listBook[i].code,listBook[i].name,listBook[i].author,listBook[i].price,listBook[i].category);	
				}
				fclose(f);
				break;
			case 3:
				f=fopen("bt7.txt","r");
				if(f==NULL){
					printf("INVALID");
					exit(0);
				}
				while(fscanf(f,"%10s %20s %20s %10d %20s",list.code,list.name,list.author,&list.price,list.category)!=EOF);
					{
					printf("%10s %20s %20s %10d %20s\n",list.code,list.name,list.author,list.price,list.category);
				}
//				for(int i=0;i<currentIndex;i++){
//					fscanf(f,"%10s %20s %20s %10d %20s",listBook[i].code,listBook[i].name,listBook[i].author,&listBook[i].price,listBook[i].category);
//					printf("%10s %20s %20s %10d %20s\n",listBook[i].code,listBook[i].name,listBook[i].author,listBook[i].price,listBook[i].category);	
//				}
				fclose(f);
				break;
			case 4:
				exit(0);
			default:
				printf("Lua chon tu 1 den 4");
		}
	}while(1==1);
	return 0;
}
