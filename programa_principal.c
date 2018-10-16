#include <stdio.h>
#include <stdlib.h>

int main() {
  int op, total = 0, telefone;
  char nome[60], endereco[100], email[60], linguagem[60];
  float pretencao;
  char first_nome[60];
  float first_pretencao;
  TipoFila ini,fim;
  INIT(&ini,&fim);
  do {
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
        total++;
        break;
      case 2:
        printf("Linguagem:");
        scanf("%s", &nome);
        printf("Pretencao salarial");
        scanf("%f", &pretencao);
        for (int i = 0; i < total; i++) {
          if (FIRST(&ini, &fim, &first_nome, &first_pretencao)) {
            if (strcmp(first_nome, nome) == 0 && first_pretencao >= pretencao) {
              int opc;
              printf("Entre em contato com o candidato...\nO candidato aceitou a vaga de emprego?\n1. Sim\n2. Nao");
              scanf("%d", &opc);
              if (opc == 1) {
                break;
              } else {
                FIRSTATEND(&ini, &fim);
              }
            } else {
              FIRSTATEND(&ini, &fim);
            }
          }
        }
        break;
      case 3:
        printf("fim da execucao");
        CLEANQUEUE(&ini, &fim);
        break;
      default:
        printf("opcao invalida\n");
		}
	} while(op !=3);
}
