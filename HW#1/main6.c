#include <stdio.h>
int main(){
	char a[]="81c8g8u168";
	char r[][5]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
	int i;
	for(i=0;a[i]!=0;i++)
		if('0'<=a[i] && a[i]<='9')
			printf("%s ",r[(a[i]-'0')]);
		else
			printf("%c ",a[i]);
	return 0;
} 
