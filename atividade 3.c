#include<stdio.h>
 
int main(){
    int calorias;

    printf("Digite o Valor do pedido:");
    scanf("%d", &calorias);

 printf("=-=-=-=-=-=-=- Calorias =-=-=-=-=-=-=-=");
 printf("\n Valores!");
 printf("\n100- Vegetariano ");
 printf("\n101- Peixe ");
 printf("\n102 - Frango");
 printf("\n103 - Carne");
 printf("\n104 - Abacaxi");
 printf("\n105 - Sorvete Diet ");
 printf("\n106 - Mouse Diet");
 printf("\n107 - Mouse Chocolate");
 printf("\n108 - Cha");
 printf("\n109 - Suco Laranja");
 printf("\n110 - Suco Melao");
 printf("\n111 - Refrigerante Diet");
 
 
 switch (calorias)
    {
    case 100 : printf ("Esse tem 180 cal.");
        break;
    case 101: printf ("Esse tem 230 cal.");
        break;
    case 102: printf ("Esse tem 250 cal.");
        break;
    case 103: printf ("Esse tem 350 cal.");
        break;
    case 104: printf ("Esse tem 75 cal.");
        break;
    case 105: printf ("Esse tem 110 cal.");
        break;
    case 106: printf ("Esse tem 170 cal.");
        break;
    case 107: printf ("Esse tem 200 cal.");
        break;
    case 108: printf ("Esse tem 20 cal.");
        break;
    case 109: printf ("Esse tem 70 cal.");
        break;
    case 110: printf ("Esse tem 100 cal.");
        break;
    case 111: printf ("Esse tem 65 cal.");
        break;
    default: printf ("Esse numero nao tem no cardapio.");
        break;
    }
}