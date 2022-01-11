//Program To Count Alphabet, digit, lines, blank space and operator.
#include<stdio.h>
#include<string.h>

void main(){
	FILE *fp;
	char c;
	int digiCount=0,alphaCount=0,blankCount=0,opCount=0,lineCount=0;
	fp = fopen("keywordFile.txt","r");
	while((c=fgetc(fp)) != EOF){
		if((c>= 'a' && c <='z') || (c>= 'A' && c <= 'Z')){
			alphaCount += 1;
		}
		else if(c == ' '){
			blankCount += 1;
		}
		else if(c == '\n'){
			lineCount += 1;
		}
		else if(c >= '0' && c <= '9'){
			digiCount += 1;
		}
		else{
			opCount += 1;
		}
	}
	printf("Total Alphabet: %d\nTotal Digit: %d\nTotal Lines: %d\nTotal Blank Space: %d\nTotal Operator Count: %d",alphaCount,digiCount,lineCount,blankCount,opCount);
	fclose(fp);s
}
