#include<stdio.h>
#include<ctype.h>

void FIRST (char);
int count , n=0;
char prod[10][10], first[10];

main() {
int i, choice;
char c, ch;

printf("How Many Production: ");
scanf("%d",&count);
printf("Enter %d Productions $: \n",count);
for(i=0;i<count;i++){
	scanf("%s%c",prod[i],&ch);
}
do{
	n=0;
	printf("Elements: ");
	scanf("%c",&c);
	FIRST(c);
	printf("\nFIRST(%c) = {\n",c);
	for(i=0;i<n;i++){
		printf("%c", first[i]);
	}
	printf("\n}\n");
	printf("press 1 to continue....\n");
	scanf("%d%c",&choice,&ch);
}while(choice == 1);
return 0;
}
void FIRST(char c){
	int j;
	if(!(isupper(c))) first[n++] = c;
	for(j=0;j<count;j++){
		if(prod[j][0] == c){
			if(prod[j][2] == '$') first[n++] = '$';
			else if(islower(prod[j][2])) first[n++] = prod[j][2];
			else FIRST(prod[j][2]);
		}
	}
}
