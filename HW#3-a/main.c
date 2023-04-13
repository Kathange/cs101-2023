#include <stdio.h>
#include <time.h>
#include <string.h>
void hanoi(int n,char A,char B,char C, FILE *han,int cnt){
	cnt++;
	if(n>0){
		hanoi(n-1,A,C,B, han,cnt+1);
		
		time_t t=time(0);
		char *c=ctime(&t);
		c[strlen(c)-1]=0;
		fprintf(han,"%d (%s) : %dP from %c to %c\n",cnt,c,n,A,C);
		
		hanoi(n-1,B,A,C, han,cnt+1);
	}
}
int main(){
	int n=3,cnt=0;
	FILE *han;
	han = fopen("hanoi.txt","w+");
	
	hanoi(n,'A','B','C', han,cnt);
	return 0;
}
//搬2^n次 
//未完成
