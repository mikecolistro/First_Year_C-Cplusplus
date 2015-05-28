#include <stdio.h>
int main (void){
	int a = 1, b =2, c = 3, d = 0;
	printf("%d\n",b/c);
	printf("%d\n",c/b);
	printf("%d\n", b%c);
	printf("%d\n", c%b);
	if ( a == b) printf("a = b\n");
	if(a<b) printf("a < b\n");
	if(c) printf("c is true\n");
	if(!d) printf("not d is true\n");
	return 0;
}