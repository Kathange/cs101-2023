#include <stdio.h>

int main(){
	int n=15;
	char c[10]={0};
	itoa(n,c,10);
	printf("%d\n",n);
	printf("%s\n",c);
	return 0;
}

