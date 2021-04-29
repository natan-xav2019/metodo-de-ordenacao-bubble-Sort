# Metodo de ordenação

## Bubble Sort

### Explicação

Bubble Sort é um algorimo de ordenação dos mais simples a ideia principal dele e percorrer todo o vetor arrumando de deslocando de 2 em 2 ate que ele não precise realizar nenhuma troca olhe o exemplo abaixo de uma lista desordenada:

#### exemplo:

Inserido os dados: `3 4 7 6 2`

na sequencia de varreduras acontecera o seguinte:
1° `3 4 6 2 7`
2° `3 4 2 6 7`
3° `3 2 4 6 7`
4° `2 3 4 6 7`

Foram necessarias 4 sequencias de varreduras a complexidade e sempre de _N_ para baixo sendo _N_ a quantide de posição ocupadas do vetor.

Perseba que ele sempre acaba pegando o numero mais alto e colocando sempre para a ultima posição. ate finalmente conseguir ordenar todos os numeros.

```c
void bubbleSort(int *prt_num, int max) {
	int i,j=0, quanTroca=0,quantMaxT=0,quantMaxverificasoes=0;
	
	while(quanTroca!=1) {
		quanTroca=0;
		
		for(i=0;i<max-1-j;i++) {
			if(prt_num[i]>=prt_num[i+1]) {
					
				troca(&prt_num[i],&prt_num[i+1]);
				
				quanTroca++;
			}
		}
		quantMaxverificasoes+=i;
		quantMaxT+=quanTroca;
		j++;
	}
	printf("numero de interações = %i\n",j);
	printf("quant Max verificações = %i\n", quantMaxverificasoes);
	printf("quant Max Trocas = %i\n",quantMaxT);
}
```

obs: a função troca literalmente faz o que se fala que e trocar de um valor com o outro se um possuia `&prt_num[3]=9 &prt_num[4]=2);` assim que passar pela função ficara `&prt_num[3]=2 &prt_num[4]=9);` 




