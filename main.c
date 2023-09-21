#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	int i;
	
	
	printf("enter a character : ");
	scanf("%c", &c);
	i=c;
	
	printf("The next character of %c (%i) is %c (%i)",c,i,c+1,i+1);
	
	
	

	return 0;
}
