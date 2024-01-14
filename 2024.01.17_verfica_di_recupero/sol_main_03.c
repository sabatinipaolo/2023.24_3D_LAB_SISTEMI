#include <stdio.h>

void a_capo()
{
    printf("\n");
}

void stampa(int n , char c)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c" , c );
    }
}





void scacchi ( int n ){

    for ( int i=0 ; i< n; i++){
        stampa( n , '*') ;stampa( n , ' ');
        a_capo();
    }
    for ( int i=0 ; i< n; i++){
        stampa( n , ' ') ; stampa( n , '*' );
        a_capo();
    }
}

int main()
{
    scacchi(5);






    printf("\n\n\n\n");
}