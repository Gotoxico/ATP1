#include <stdio.h>
int main(){
    int geral, codigo, quantidade, subtotal, preco, total=0;
    printf("Informe quantidade de itens deste pedido: ");
    scanf("%d", &geral);
    for(int count=1; count<=geral; count++){
        printf("\nCodigo do item %d: ", count);
        scanf("%d", &codigo);
        if (codigo == 100){
            preco = 10;}
        if(codigo == 101){
            preco = 12;}
        if(codigo == 102){
                preco = 15;}
        if(codigo == 103){
            preco = 11;}
        if(codigo == 104){
            preco = 15;}
        if(codigo == 105){
            preco = 3;}
        printf("Quantidade do item %d: ", count);
        scanf("%d", &quantidade);
        subtotal = preco * quantidade;
        printf("Subtotal do item %d: %d", count, subtotal);
        total = total + subtotal;
    }
    printf("\nTotal Geral: %d", total);
}