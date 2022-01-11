//Program to print data from symbol table.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){
	char exp[100];
	int i;
	void *p;
	printf("Enter Expression Ending With $: ");
	gets(exp);
	printf("Entered Expression with $: ");
	puts(exp);
	printf("Given Expression: ");
	for(i=0;i<strlen(exp)-1;i++){
		printf("%c",exp[i]);
	}
	printf("\n\t\t\tSymbol Table\n");
	printf("\tSymbol\t\tAddress\t\tType\n");
	for(i=0;i<strlen(exp)-1;i++){
		if(isalpha(toascii(exp[i]))){
			p = malloc(exp[i]);
			printf("\t%c\t\t%d\t\tIdentifier\n",exp[i],p);
		}
		else{
			p = malloc(exp[i]);
			printf("\t%c\t\t%d\t\tOperator\n",exp[i],p);
		}
	}
}


