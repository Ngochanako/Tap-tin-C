#include<stdio.h>

int main(){
	FILE *f=NULL;
	char str[1000];
	f=fopen("bt01.txt","w");
	if(f!=NULL){
		printf("Nhap vao chuoi bat ky");
		fgets(str,1000,stdin);
		fprintf(f,"%s",str);
		fclose(f);
	}
}
