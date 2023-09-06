#include<stdio.h>
 
int main(){
    int pedido;

    printf("Digite o Valor do pedido:");
    scanf("%d", &pedido);

 printf("=-=-=-=-=-=-=- Lanchonete =-=-=-=-=-=-=-=");
 printf("\n\nCardapio!");
 printf("\n100 - Cachorro quente ");
 printf("\n101 - Bauru Simples ");
 printf("\n102 - Bauro c/ovo");
 printf("\n103 - Hamburger");
 printf("\n104 - Chesseburger");
 
 
 switch (pedido)
    {
    case 100: printf ("Esse Codigo custa R$10.10.");
        break;
    case 101: printf ("Esse Codigo custa R$8.30.");
        break;
    case 102: printf ("Esse Codigo custa R$8.50.");
        break;
    case 103: printf ("Esse Codigo custa R$12.50.");
        break;
    case 104: printf ("Esse Codigo custa R$13.25.");
        break;

    default: printf ("Esse numero nao tem no cardapio.");
        break;
    }
}