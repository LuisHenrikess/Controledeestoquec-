#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX
struct estoque{
	int codigo;
	char descricao[20];
};
using namespace std;
void troca (char vet[50],char encontra, char troca){
		for(int i=0;1<50;i++){
		if(vet[i]==encontra){
			vet[i]=troca;
			
		}
	}
	
}
bool procura (char desc[50], int &codig) {
	char desc_lida[50];
	int codig_lida;
	
	troca(desc,' ','_');
	
	
	FILE *ArqEst;
	struct estoque RegEst;
	int i;
	ArqEst=fopen("Estoque.dat","a");
	for (i=0;i<MAX;i++){
		printf("Digite o Codigo %i.o produto:",i+1);
		scanf("%i",&RegEst.codigo);
		printf("Digite a descricao do produto %s.o descricao:",i+1);
		scanf("%s",RegEst.descricao);
		fwrite(&RegEst,sizeof(RegEst),1,ArqEst);
	}
	
	arquivo = fopen("estoque.dat","r");
	while(!feof(arquivo)){
		fscanf(arquivo,"%d  %s",&desc_lida,&codig_lida);
		if(strcmp(desc_lida,desc)==0) {
			codig=codig_lida;
			fclose(arquivo);
				troca(desc,'_',' ');
			return true
		}
		
	}
	fclose(arquivo);
	return false;
}
int main(){
	char desc[50];
	int codig;
	
	while(1){
		system("cls");
		cout <<"Consulta De Estoque"<< end1;
		cout<<"Descricao do produto: ";
		cin>>desc;
		
		if(procura(desc,codig)){
			cout<<"Produto: "<<desc;
			cout<<"Codigo: "<<codig;
			system("pause");
		}else{
			cout<<"Produto nao encontrado!";
			system("pause");
		}
		
		
		return 0;
		
	}
}
