#include <stdio.h>
#include <stdlib.h>
int comp(const void*a,const void*b){
	int n1=*(const int*)a;
	int n2=*(const int*)b;
	if(n1<n2)	return -1;
	else if(n1>n2)	return 1;
	else	return 0;
}
int main(){
	char a[]="-9 8 7 6 5 -4 3 -2 1";
	int i=4,n[9],j,k=0,l;
	for(j=0;a[j]!=0;j++){
		if(a[j]==' ')
			for(l=j-1;l>=0;l--)	a[l]=' ';
		else if(a[j-1]=='-')	;
		else	n[k++]=atoi(a);
	}
	qsort(n,9,4,comp);
	printf("%d\n",n[9-i]);
	return 0;
} 
