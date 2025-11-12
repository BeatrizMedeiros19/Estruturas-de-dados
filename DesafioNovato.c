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
}


int main (){
    struct Territorio area [maxTerritorios];
    int totalTerritorios = 0;
    int opcao;
}

//apresentando as opções
