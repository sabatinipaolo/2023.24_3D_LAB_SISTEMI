#include <stdio.h>

int main()
{
    // penso un numero
    //TODO: generare un numero casuale
    int nume_da_ind = 50;
    int numero_inserito = 0 ;
    //ripeto
    for ( ; nume_da_ind != numero_inserito ; ){

        printf("inserisci un numero: ");
        scanf("%d", &numero_inserito) ;


        if (nume_da_ind == numero_inserito)
            printf("hai indovinato\n") ;


    } 




}