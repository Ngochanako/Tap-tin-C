#include<stdio.h>

int main(){
	FILE *f5=NULL;
	f5=fopen("bt5.txt","w+");
	FILE *f1=NULL;
	f1=fopen("bt01.txt","r");
	FILE *f3=NULL;
	f3=fopen("bt3.txt","r");
	char str1[100];
	char str2[100];
	if(f1!=NULL){
		//doc file bt1 sang bo nho dem
		fseek(f1,SEEK_SET,0);
		fread(str1,1,sizeof(str1),f1);
		//doc file bt3 sang bo nho dem
		fseek(f3,SEEK_SET,0);
		fread(str2,1,sizeof(str2),f3);
	}
		//ghi du lieu s1 vs s2 tu bo nho dem  vao tap tin bt5
	if(f5!=NULL){
		fprintf(f5,"%s",str1);
		fprintf(f5,"%s",str2);
	}
}
