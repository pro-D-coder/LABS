%{
#include<stdio.h>
#include<stdlib.h>
%}

%token A B NL

%%
stmt: S NL {
	printf("Valid String!");
	exit(1);
};

S: A S B | ;
%%

int yyerror(char *msg){
	printf("Invalid String!");
	exit(0);
}

main(){
	printf("Enter String: ");
	yyparse();
}
