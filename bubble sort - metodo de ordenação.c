#include <stdio.h>
#include <stdlib.h>

//bubble sort - metodo de ordenação
void troca(int *valor1,int *valor2) {
	int aux;
	
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}

void bubbleSort(int *prt_num, int max) {
	int i, quanTroca=0;
	
	while(quanTroca!=1) {	
		quanTroca=0;
		
		for(i=0;i<max-1;i++) {
			if(prt_num[i]>prt_num[i+1]) {
					
				troca(&prt_num[i],&prt_num[i+1]);
				
				quanTroca++;
			}
		}
	}
}

main() {
	int i,quanTroca=0,max=0;
	int num,*prt_num = NULL, *prt_num_mais;
	
	printf("REGRA DE PARADA: 9999\n");
	printf("digite quantos numeros desejar\n");
	
	do {
		scanf("%i",&num);
		
		if(num != 9999) {
			max++;
			prt_num_mais = realloc((int*)prt_num, max* sizeof(int));
			
			if (prt_num_mais != NULL) {
			prt_num=prt_num_mais;
			prt_num[max-1]=num;
        	}
		}	
	}while(num != 9999);
	
	bubbleSort(&*prt_num,max);
	
	printf("Numeros ordenados\n");
	for(i=0;i<max;i++)
		printf("Posição[%i] = %i\n",i,prt_num[i]);
	
	free(prt_num);
	
	system("Pause");
}
