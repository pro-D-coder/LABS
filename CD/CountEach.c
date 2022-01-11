//Program to Count Each Character In a file.
#include<stdio.h>
#include<string.h>

void main(){
	int i,temp;
	int countAlpha[128] ={
			0
	};
	char c;
	FILE *fp;
	fp = fopen("keyWordFile.txt","r");
	while((c=fgetc(fp)) != EOF){
		temp = (int) c;
		countAlpha[temp] += 1;
	}
	for(i=32;i<126;i++){
		if(i == 32){
			printf("Blank Space Ocurred: %d Times\n",countAlpha[i]);
		}
		else{
		printf("%c Ocurred: %d Times\n",i,countAlpha[i]);
	}
	}
	fclose(fp);
}
