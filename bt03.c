#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	FILE*f=NULL;	
	int row;
	char str[100];
	char buffer[200];
	f=fopen("bt3.txt","w+");
	if(f!=NULL){
		printf("Nhap vao so dong");
		scanf("%d",&row);
		getchar();
        for(int i=0;i<row;i++){
        	printf("Nhap vao chuoi bat ky:");        	
        	gets(str);
        	fputs(str,f);
        	fputs("\n",f);
		} 
		fseek(f,SEEK_SET,0);	       	
		}
		while(fgets(buffer,100,f)!=NULL){
			printf("%s",buffer);	
			}  
		fclose(f);    	
	}
	
