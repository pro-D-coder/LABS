
%%

[1-9][0-9]{9} {
	printf("Mobile Is Valid!\n");
}
.+ {
	printf("Mobile No. Is Not Valid\n");
}
	
%%

int main() {
	printf("Enter Mobile Number: ");
	yylex();
	printf("\n");
	return 0;
}
