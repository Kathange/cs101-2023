#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[]={1,2,3}, aa[3],i;
	char b[]={"ABC"};
	float c[]={1.1,1.2,1.3};
	FILE *fp;
	fp=fopen("a.bin","wb+");
	fwrite(a,sizeof(int),3,fp);
	fseek(fp,0,SEEK_SET);
	fread(aa,sizeof(int),3,fp);
	for(i=0;i<3;i++)
		printf("%d ",aa[i]);
	fclose(fp);
	return 0;
} 
