#include<stdio.h>
 
int main(){
    int ddd;

    printf("Digite o DDD do Brasil:");
    scanf("%d", &ddd);

    switch (ddd)
    {
    case 61: printf ("Esse DDD e de Brasilia.");
        break;
    case 71: printf ("Esse DDD e de Salvador.");
        break;
    case 11: printf ("Esse DDD e de Sao Paulo.");
        break;
    case 21: printf ("Esse DDD e do Rio de Janeiro.");
        break;
    case 32: printf ("Esse DDD e de Juiz do Fora.");
        break;
    case 19: printf ("Esse DDD e de Campinas.");
        break;
    case 27: printf ("Esse DDD e de Vitoria.");
        break;
    case 31: printf ("Esse DDD e de Belo Horizonte.");
        break;       
    
    default: printf ("Esse DDD nao esta nos registros.");
        break;
    }
}
