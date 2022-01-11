%{
#include<stdio.h>
int flag = 0;
%}

%token NUMBER
%left '+' '-'
%left '*' '/' '%'
%left '(' ')'

%%
ArthmeticExpression: E {
			printf("\nResult: %d\n",$$);
			return 0;
		};
E: E'+'E {$$ = $1 + $3;}
| E'-'E {$$ = $1 - $3;}
| E'*'E {$$  = $1 * $3;}
| E'%'E {$$ = $1 % $3;}
| '('E')' {$$ = $2;}
| NUMBER {$$ = $1;}
;
%%

void yyerror(){
	printf("\nEntered Arthmetic Expression is Not valid!");
	flag =1;
	return 1;
}

main() {
	printf("\nEnter Arthmetic Expression: ");
	yyparse();
	if(flag == 0)
		printf("\nEntered Arthmetic Expression is Valid!\n");
}
