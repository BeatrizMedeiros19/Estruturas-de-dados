#include <stdio.h>
#include <string.h>

//definindo constantes 
#define maxTerritorios 5

//definindo a struct dos territórios
struct Territorio {
    char nome [30];
    char cor [10];
    int tropas;
};

//função para limpar buffer de entrada
void LimparBufferEntrada(){
    int c;
    while ((c= getchar ()) != '\n' && c !=EOF);
};


int main (){
    struct Territorio area [maxTerritorios];
    int totalTerritorios = 0;
    int opcao;
//apresentando o menu
for (opcao = -1; opcao != 0; ) {
    printf("Bem vindo ao jogo! O que gostaria de fazer?\n");
    printf("Digite 1 para cadastrar novo território\n");
    printf("Digite 2 para listar territórios já cadastrados\n");
    printf("Digite 0 para sair\n");
    printf("------------------------------\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
switch (opcao){
case 1: //cadastrando território 
if (totalTerritorios < maxTerritorios){
    printf("\nCadastro do território #%d\n", totalTerritorios+1);
    printf("Nome:");
    scanf("%s", area[totalTerritorios].nome);
    printf("Cor:");
    scanf("%s", area[totalTerritorios].cor);
    printf("Número de tropas:");
    scanf("%d", &area[totalTerritorios].tropas);
    printf("Território cadastrado com sucesso!\n");
}
else{
        printf("Limite máximo de %d territórios atingido!\n",maxTerritorios);
}
break;
case 2:
if (totalTerritorios ==0){
    printf("nenhum território cadastrado ainda!");
} else{
    printf("TERRITÓRIOS CADASTRADOS:\n");
    for (int i = 0; i < totalTerritorios; i++) {
                        printf("\nTerritorio #%d\n", i + 1);
                        printf("Nome: %s\n", area[i].nome);
                        printf("Cor: %s\n", area[i].cor);
                        printf("Tropas: %d\n", area[i].tropas);
                    }
                }
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}

