#include<stdio.h>

struct Sinhvien{
	char name[50];
	int age;
	char phone[20];
	char email[50];
};
typedef struct Sinhvien S;
int main(){
	int num;
	S list[num];
	FILE*f=NULL;
	char buffer[200];
	f=fopen("students.txt","w");
	printf("Nhap so luong sinh vien:");
	scanf("%d",&num);
	getchar();
	for(int i=0;i<num;i++){
		printf("Nhap ten sinh vien:");
		gets(list[i].name);
		printf("Nhap tuoi:");
		scanf("%d",&list[i].age);
		getchar();
		printf("Nhap so dien thoai:");
		scanf("%s",list[i].phone);
		printf("Nhap email sinh vien:");
		scanf("%s",list[i].email);
		fprintf(f,"%20s %10d %20s %20s\n",list[i].name,list[i].age,list[i].phone,list[i].email);
	}
	for(int i=0;i<num;i++){ 
	    fgets(list[i].name,50,f);
		fscanf(f,"\t%d %s %s", &list[i].age, list[i].phone, list[i].email);
        printf("%s %d %s %s\n", list[i].name, list[i].age, list[i].phone, list[i].email);
	}             
	fclose(f);
}
