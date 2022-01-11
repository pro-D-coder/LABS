%%
(http(s{0,1}):\/\/)(www.)([0-9a-zA-Z]+)\.com { printf("Valid Commercial Web URL\n");}

(http(s{0,1}):\/\/)(www.)([0-9a-zA-Z]+)\.edu { printf("Valid Educational Web URL\n");}

.+ {printf("Either Not Valid Or Not An Educational or Commercial Web URL\n");}
%%

void main(){
	printf("Enter URL: ");
	yylex();
}
