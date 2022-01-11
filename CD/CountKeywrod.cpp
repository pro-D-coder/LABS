#include<stdio.h>
#include"./utils.h"

int main(){
	int count = 0, i;
	FILE *fp;
	char arr[50];
	fp = fopen("keywordFile.txt","r");
	while(fscanf(fp,"%s",arr) != EOF){
		if(CheckKeyword(arr)){
			count += 1;
		}
	}
	printf("Total Keywords: %d",count);
	fclose(fp);
}
