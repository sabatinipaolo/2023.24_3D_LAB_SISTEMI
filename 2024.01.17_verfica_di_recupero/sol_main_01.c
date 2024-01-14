#include <stdio.h>

void a_capo(){
    printf("\n");
} 

void stampa_asterischi ( int n ){
    for (int i = 0 ; i < n ;i ++){
        printf("*");
    }
}

void rettangolo ( int numero_righe, int numero_colonne) {

    for (int i = 0 ; i < numero_righe ; i++){
        stampa_asterischi(numero_colonne);
        printf("\n");
    }

 }

int main(){

    rettangolo ( 5 , 20 );



    printf("\n\n\n\n");
}