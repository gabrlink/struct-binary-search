//exercicio 3 (ultima lista) 08/05/2018
#include<stdio.h>

typedef struct dadosGrupo{
	char nome[30];
	int quantidade;
	float vgasto;
	float vestimado;
	float valoriza;
	}
	
	int main(){
		int i;
		struct dadosGrupo dados[20];
		
	for (i=0;i<20;i++){
	
		printf("digite o nome da equipe");
		scanf("%s", dados[i].nome);
		printf("digite a quantidade de componentes");
		scanf("%d", &dados[i].quantidade);
		printf("digite o valor gasto do projeto");
		scanf("%f",&dados[i].vgasto);
		printf("digite o valor estimado do projeto quando finalizado");
		scanf("%f",&dados[i].vestimado);
		printf("digite a valorização estimada do projeto");
		scanf("%f",&dados[i].valoriza);
		dados[i].valoriza = dados[i].vestimado - dados[i].vgasto;
	}
			}
			
			
			struct dadosGrupo atual;
			int j;
			
			for(i=1;i<20;i++){
				atual = dados[i];
				j = i - 1;
				while ((j>=0)) && (atual.valoriza > dados[j].valoriza){
					dados[j+1] = dados[j];
					j=j-1;
					
		}
		dados[j+1] = atual;
		
				
			}
			
			//busca binaria
			int achei = 0, inicio = 0, fim=9, meio;
			float busca; 
			
			printf("digite uma valorização para achar no vetor de equipes");
			scanf("%f", &busca);
			
			while (inicio <= fim && !achei){
				meio = (inicio + fim)/2
				if (busca == dados[meio].valoriza){
					achei = 1;
					
				}else{
					if (busca > dados[meio].valoriza){
						fim = meio - 1;
						
					}else{
						inicio = meio+1;
					}
				}
				if(achei){
					printf("o valor %f foi encontrado na posicao %d", busca, meio);
					
				}else{
					printf("o valor %f nao foi encontrado", busca);
					
				}
			}
				
				
			
			
			
		
	
		
	




