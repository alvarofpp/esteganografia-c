#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib/global.h"
#include "lib/arg/arg.h"
#include "lib/img/img.h"

int main(int argc, char **argv){
	imprimirArgv(argc, argv);
	if((argc == 1) || (strcmp(argv[1], "-h") == 0) || (strcmp(argv[1], "--help") == 0)){
		help();
	} else if(verificarArgv(argc, argv)){
		int arg;
		if(strcmp(argv[1], "-d") == 0){
			/*
			for(arg = 2; arg < argc; arg++){
			if(strcmp(argv[arg], "-o") == 0){
		} else if(strcmp(argv[arg], "-s") == 0){
	}
}
*/
} else {
	int tamanho = tamanhoNomeArquivo(argv[argc-1], 0);
	printf("Tamanho do nome do arquivo %s: %d\n", argv[argc-1], tamanho);

	char *extensao = malloc(3*sizeof(char));
	extensao[0] = argv[argc-1][tamanho-3];
	extensao[1] = argv[argc-1][tamanho-2];
	extensao[2] = argv[argc-1][tamanho-1];
	printf("Extensão %s (codigo: %d)\n", extensao, verificarExtensao(extensao));
	/*
	for(arg = 2; arg < argc; arg++){
	if(strcmp(argv[arg], "-f") == 0){

} else if(strcmp(argv[arg], "-i") == 0){
inputFile(argv[++arg]);
} else if(strcmp(argv[arg], "-m") == 0){

} else if(strcmp(argv[arg], "-r") == 0){

} else if(arg == (argc-1)){
imageFile(argv[arg]);
}
}
*/
}
}

return 0;
}
