%%
([0-2][1-9]|[3][0-1])\/([0][1-9]|[1][0-2])\/([1-2][0-9]{3}) {printf("Date Is Valid!");}
.+ {printf("Date Is Not Valid!");}
%%

void main(){
	printf("Enter Data: ");
	yylex();
}
