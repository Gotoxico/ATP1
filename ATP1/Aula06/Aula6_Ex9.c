//Programa para ler dimensoes terreno e calcular custo para cercar//
#include <stdio.h>
int main(){
    float comprimento, largura, preco_tela, custo;
    printf("Digite o comprimento do terreno: ");
    scanf("%f",&comprimento);
    printf("Digite a largura do terreno: ");
    scanf("%f",&largura);
    printf("Digite o preco da tela: ");
    scanf("%f",&preco_tela);
    custo = (comprimento*largura)*preco_tela;
    printf("Custo total: R$ %f", custo);
}
