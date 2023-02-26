#include <stdio.h>
int main(){
	char a[]="A3B2C4A9",c[40]={0};
	int i,j,cnt=0;
	for(i=0;a[i]!=0;i++)
		if(i%2)
			for(j=0;j<a[i]-'0';j++)
				c[cnt++]=a[i-1];
	printf("%s\n",c);
	return 0;
} 
