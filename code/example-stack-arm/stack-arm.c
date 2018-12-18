#include <stdio.h>
#include <stdlib.h>

//Essa função recebe dois inteiros como parametros, soma eles e retorna a soma.

int soma(int x, int y){
	return x + y;
}

//Essa função recebe somente um inteiro como parametro, incrementa ele em duas unidades e retorna o parametro acrescido de duas unidades.

int incrementa2(int x){
	int incremento = 2;
	return soma(x,incremento);
}

int main(void){
	int resultado;
	
	resultado = incrementa2(1);
	printf("O resultado é: %d \n", resultado);

	return 0;
}


