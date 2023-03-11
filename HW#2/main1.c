#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//�S�O���P�e6�ӼƦr�����ƥ~�A�n�P�e�X�ժ��S�O�������ƶܡH
int m,n[5][7];
void buildLotto(){
	int i,j,k;
	int rd,b1,b2;
	for(k=0;k<m;k++){
		b2=0;
		for(i=0;i<7;i++){
			rd=(i!=6)?rand()%69+1:rand()%9+1;
			b1=1;
			for(j=0;j<i;j++){
				if(rd==n[k][j]){
					i--;
					b1=0;
					break;
				}
			}
			if(i==6 && k>0){
				b2=1;
				for(j=0;j<m && (1<=n[j][6]&&n[j][6]<=10);j++){ 
					if(rd==n[j][6]){
						i--;
						b2=0;
						break;
					}
				}
			}
			if(b1&&!b2)
				n[k][i]=rd;
			else if(b1&&b2)
				n[k][6]=rd;
		}
	}
}
void insert(int t,int i,int j){
	int e=t;
	while(e<n[i][j]){
		n[i][j+1]=n[i][j];
		j--;
	}
	n[i][j+1]=e;
}
void sort(){
	int i,j;
	for(i=0;i<m;i++)
		for(j=1;j<6;j++){
			int t=n[i][j];
			insert(t,i,j-1);
		}
}
void printToFile(){
	FILE *lot;
	int i,j;
	time_t t=time(0);
	char *c=ctime(&t);
	c[strlen(c)-1]=0;
	
	lot = fopen("lotto.txt","w+");
	fprintf(lot,"========= lotto649 =========\n");
	fprintf(lot,"= %s =",c);
	for(i=1;i<=5;i++){
		fprintf(lot,"\n[%d]: ",i);
		if(i<=m)
			for(j=0;j<7;j++)
				fprintf(lot,"%02d ",n[i-1][j]);
		else
			for(j=0;j<7;j++)
				fprintf(lot,"-- ");
	}
	fprintf(lot,"\n========= csie@CGU =========");
}
int main(){
	srand(time(0));
	printf("�w����{�����ֳz�m�ʶR���x\n"
		   "�аݱz�n�R�X�ռֳz�m�G");
	scanf("%d",&m);
	printf("�w���z�ʶR�� %d �ռֳz�զX��X�� lotto.txt\n",m);
	buildLotto();
	sort();
	printToFile();
	return 0;
}
