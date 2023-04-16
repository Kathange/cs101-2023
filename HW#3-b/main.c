#include <stdio.h>

typedef struct my_mm{
	int a[10];
} my_mm_t;
my_mm_t mms;
int g_mem[10]={0};
int* my_calloc(int n, int size){//n?
	int i,j,cnt=0,b=0,c=0;
	for(i=0;i<10;i++){
		if(mms.a[i]==0)
			cnt++;
		else if(mms.a[i]==1){
			if(cnt>=size){
				b=1;
				break;
			}
			else
				cnt=0;	
		}
		if(mms.a[i]==1 && mms.a[i+1]==0)
			c=i+1;
	}
	if(cnt>=size)
		b=1;
	
	if(b){
		for(j=0;mms.a[j]!=0;j++);
		i=(c)?c:j;
		for(;i<size+c;i++){
			g_mem[i] = size;
			mms.a[i] = 1;
		}
	}
	
	for(i=0;i<10;i++)
		printf("%d",mms.a[i]);
	printf("\n");
	if(b)
		return &g_mem[j];
	else
		return NULL;
}
void my_free(int *p){
	int *q,n=*p,i;
	for(i=0;i<10;i++)
		if(g_mem[i]==n)
			break;
	for(q=p;*q==n;q++,i++){
		*q=0;
		mms.a[i]=0;
	}
	for(i=0;i<10;i++)
		printf("%d",mms.a[i]);
	printf("\n");
}

int main(){
	int i;
	for(i=0;i<10;i++)
		mms.a[i] = 0;
	int *np1 = my_calloc(1,1);
	int *np2 = my_calloc(1,2);
	int *np3 = my_calloc(1,3);
	int *np4 = my_calloc(1,4);
	my_free(np1);
	my_free(np4);
	int *np5 = my_calloc(1,3);
	return 0;
}
