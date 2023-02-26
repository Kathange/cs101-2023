#include <stdio.h>
int main(){
	char a[]="ABCabcABC";
	int shift=4,i;
	printf("%s\n%d\n",a,shift);
	for(i=shift;i<sizeof(a)-1;i++)
		printf("%c",a[i]);
	for(i=0;i<shift;i++)
		printf("%c",a[i]);
	return 0;
}
