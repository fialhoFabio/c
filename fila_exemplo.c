#include <stdio.h>
#include<stdlib.h>
#include "TipoFilaINT.h"

int main(){
TipoFila ini,fim;
int v;
INIT(&ini,&fim)	;
ENQUEUE(&ini,&fim,3);
ENQUEUE(&ini,&fim,2);
if (FIRST(ini,fim,&v)) printf("valor inicio:%d \n", v);
if (DEQUEUE(&ini,&fim,&v)) printf("valor retirado:%d \n", v);
if (DEQUEUE(&ini,&fim,&v)) printf("valor retirado:%d \n", v);
}
