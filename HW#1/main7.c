#include <stdio.h>
int main(){
	char a[]="10001111";
	char b[]="10011110";
	int i,j=1,sum1=0,sum2=0,m=(sizeof(a)-1)/4-1;
	char c[2][4]={0};
	for(i=sizeof(a)-2;i>=0;i--){
		sum1+=(a[i]-'0')*j;
		sum2+=(b[i]-'0')*j;
		j*=2;
		if(i%4==0){
			c[0][m]=(sum1>9)?(sum1-10+'A'):(sum1+'0');
			c[1][m]=(sum2>9)?(sum2-10+'A'):(sum2+'0');
			j=1;	m--;
			sum1=0;	sum2=0; 
		}
	}
	for(i=0;i<(sizeof(a)-1)/4;i++)
		printf("%s\n",c[i]);
	return 0;
} 
