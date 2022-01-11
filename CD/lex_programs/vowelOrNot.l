%%
[aeiou | AEIOU][a-zA-z0-9]+ {printf("Start With Vowel");}
.+ {printf("Not Start With Vowel");}
%%

void main(){
	printf("Enter Input: ");
	yylex();
}
