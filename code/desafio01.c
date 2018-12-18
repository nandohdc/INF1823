#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void danger(){
	printf("Voce foi redirecionado para funcao danger!:(\n");
	exit(0);
}

int main(int argc, char** argv){
       	char buf[10];
	strcpy( buf, argv[1] );
	return 0;
}
