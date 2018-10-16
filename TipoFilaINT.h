#include <string.h>

struct CadastroCandidato {
	char nome[60];
	char endereco[100];
	char email[60];
	int telefone;
	char linguagem[60];
	float pre_salario;
};

struct no { 
       struct CadastroCandidato dado;
       struct no *prox;
};

typedef struct no* TipoFila;

void INIT(TipoFila *ini, TipoFila *fim)
{
*ini = NULL;
*fim = NULL;
}

int IsEmpty(TipoFila ini,TipoFila fim)
{

if (ini == NULL && fim == NULL) 
	return(1);
else
	return(0);
}

void ENQUEUE( TipoFila *ini, TipoFila *fim, char nome[60], char endereco[100], char email[60], char linguagem[60], int telefone, float pretencao)
{
TipoFila novo;
novo=(TipoFila ) malloc (sizeof(struct no));
if (novo==NULL) 
	 printf("Fila Cheia \n");
else  {
	 strcpy(novo->dado.nome, nome);
	 strcpy(novo->dado.endereco, endereco);
	 strcpy(novo->dado.email, email);
	 strcpy(novo->dado.linguagem, linguagem);
	 novo->dado.telefone = telefone;
	 novo->dado.pre_salario = pretencao;
	 novo->prox=NULL;
	if (IsEmpty(*ini,*fim)){
	     *ini = novo;
	     }
	else{
	     (*fim)->prox= novo;
	     }
    *fim=novo;
	}
}

int FIRST(TipoFila *ini, TipoFila *fim, char *nome, float *pretencao) {
	if(!IsEmpty(*ini, *fim)){
		strcpy(*nome, (*ini)->dado.nome);
		*pretencao = (*ini)->dado.pre_salario;
		return(1);
	}
	else
		return (0);	
}

/*int DEQUEUE(TipoFila *ini, TipoFila *fim, int *valor)
{
	TipoFila aux;
	if (!IsEmpty(*ini, *fim)){	
		aux = *ini;
		*valor = (*ini)->dado;
		*ini = (*ini)->prox;
		free (aux);
		if (*ini == NULL)
			*fim=NULL;
		return 1;
		}
	else
		return 0;
}*/