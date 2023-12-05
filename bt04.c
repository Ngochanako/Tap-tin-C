#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	FILE*f=NULL;	
	int cnt=0;
	char buffer[200];
	f=fopen("bt3.txt","r+");
	if(f!=NULL){
		fseek(f,SEEK_SET,0);	       	
		while(fgets(buffer,200,f)!=NULL){
			printf("%s",buffer);
			cnt++;
			}  
		fclose(f); 
	}   	
	printf("So dong trong file la:%d",cnt);	
}

