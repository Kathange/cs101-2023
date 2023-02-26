#include <stdio.h>
#include <stdlib.h>
int main(){
	char a[]="-99acbc";
	char b[]="99acbc";
	char c[]="ac-99bc";
	int n[3],i,j,k=0;
	n[0]=atoi(a);
	n[1]=atoi(b);
	for(i=0,j=1;c[i]!=0;i++){
		if('0'<=c[i] && c[i]<='9'){
			n[2]+=(c[i]-'0')*j;
			j*=10;
		}
		else if(c[i]=='-')
			k=1;
	}
	if(k)	n[2]=-n[2]+1;	
	for(i=0;i<3;i++)
		printf("%d\n",n[i]);
	return 0;
}
