#include<stdio.h>
#include<string.h>

int CheckKeyword(char * word){
int i, flag=0;
char keys[32][10] = {
"if","else","enum","const","for","break",
"while","auto","case","char","double","extern",
"float","int","char","bool","long","short",
"return","goto","do","signed","unsigned","continue"
,"sizeof","struct","switch","void","typedef","union","register","default"}, input[100];
	for(i=0;i<32;i++){
		if(strcmp(word,keys[i]) == 0){
				flag = 1;
			}
		}
	if(flag){
		return 1;
	}
	else{
		return 0;
	}
}
