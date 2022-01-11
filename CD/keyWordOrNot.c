//Check Input is Keyword or Not.

#include<stdio.h>
#include<string.h>

void main(){
int i, flag=0;
char keys[32][10] = {
"if","else","enum","const","for","break",
"while","auto","case","char","double","extern",
"float","int","char","bool","long","short",
"return","goto","do","signed","unsigned","continue"
,"sizeof","struct","switch","void","typedef","union","register","default"}, input[100];
	printf("Enter Input: ");
	gets(input);
	for(i=0;i<32;i++){
		if(strcmp(input,keys[i]) == 0){
				flag = 1;
			}
		}
	flag == 1?printf("Keyword!"):printf("String!");
}


