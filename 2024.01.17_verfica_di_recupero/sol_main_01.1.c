#include <stdio.h>

void a_capo(){
    printf("\n");
} 

void stampa ( int n , char c  ){
    for (int i = 1 ; i < n ;i ++){
        printf( "%c" , c );
    }
}

void rettangolo ( int numero_righe, int numero_colonne, char c) {

    for (int i = 0 ; i < numero_righe ; i++){
        stampa(numero_colonne , c );
        a_capo();
    }

 }

int main(){

    rettangolo ( 5 , 20 , '*');



    printf("\n\n\n\n");
}