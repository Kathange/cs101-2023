#include <stdio.h>
int main(){
	char a[]="AABBBCCCCddd";
	int i,n[4]={0};
	for(i=0;a[i]!=0;i++)//i<sizeof(a)
		if(a[i]!='d')
			n[(a[i]-'A')]++;
		else
			n[(a[i]-'a')]++;
	printf("A%dB%dC%dd%d\n",n[0],n[1],n[2],n[3]);
	return 0;
} 
