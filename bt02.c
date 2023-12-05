#include<stdio.h>

int main(){
	FILE *f=NULL;
	char buffer[1000];
	f=fopen("D:\\PTIT\\lap trinh C\\file\\bt01.txt","r");
	if(f!=NULL){
		fread(buffer,1,sizeof(buffer),f);
		printf("%s",buffer);
		fclose(f);
	}
}
