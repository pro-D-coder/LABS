%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A B C D NL

%%
stmt: S X NL {
		printf("Valid String!");
		exit(0);
	};

S: A S B | 
X: C X D |
;
%%

int yyerror(char *msg){
	printf("Invalid String!\n");
	exit(0);
}

int main() {
	printf("Enter String: ");
	yyparse();
	return 0;
}
