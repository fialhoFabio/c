#include <stdio.h>
#include <stdlib.h>

#include "TipoFilaINT.h"

void inscricaoCanditato(int endeIni, int endeFim);
void vagaEmprego(int endeIni, int endeFim);


int main(){
int pid, op;
char resp;
TipoFila ini,fim;
INIT(&ini,&fim);
			char nome[60], endereco[100], email[60], linguagem[60];
			int telefone;
			float pretencao;
			char first_nome[60];
			float first_pretencao;
do{
	printf("1- Inscrição de candidato\n");
	printf("2- Vaga de emprego\n");
	printf("3- Encerra o programa\n");
	scanf("%d", &op);
	switch(op) {
		case 1:
			printf("Nome:");
			scanf("%s", &nome);
			printf("Endereco:");
			scanf("%s", &endereco);
			printf("E-mail:");
			scanf("%s", &email);
			printf("Linguagem");
			scanf("%s", &linguagem);
			printf("Telefone");
			scanf("%d", &telefone);
			printf("Pretencao salarial:");
			scanf("%f", &pretencao);
			ENQUEUE(&ini, &fim, nome, endereco, email, linguagem, telefone, pretencao);
			break;
		case 2:
			printf("Linguagem:");
			scanf("%s", &nome);
			printf("Pretencao salarial");
			scanf("%f", &pretencao);
			if (FIRST(&ini, &fim, first_nome, &first_pretencao)) {
				printf("%f", first_pretencao);
				if (strcmp(first_nome, nome) == 0 && first_pretencao >= pretencao) {
					printf("oi");
					// contata o cara
					if (1) {
						//menu principal
					} else {
						// coloca no fim da fila
					}
				} else {
					// coloca no fim da fila
					// volta a pegar o 1° e fazer o trampo de novo
				}
			} else {
				printf("Nenhum registro encontrado!");
			}
		//	if (DEQUEUE(&ini,&fim,&pid)) {
		//		printf("processo em execucao:%d \n", pid);
		//		printf("processo foi concluido? (s/n):");
		//		fflush(stdin);
		//		scanf("%c", &resp);
		//		if (resp=='n' || resp =='N')
		//			ENQUEUE(&ini,&fim,pid);
		//		else
		//			printf("processo %d foi concluido\n", pid);
		//		}
			break;
		case 3: 
			printf("fim da execucao");
			/*esvaziar a fila*/
			break;
		default:
			printf("opcao invalida\n");
		}
	}while(op !=3);
}

void inscricaoCanditato (int endeIni, int endeFim) {

}

void vagaEmprego (int endeIni, int endeFim) {
	
}
