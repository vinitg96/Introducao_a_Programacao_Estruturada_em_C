#include <stdio.h>
void main(){
    
    char letra;
    int conta = 0,conte = 0,conti = 0 , conto = 0, contu = 0;

    //scanf(" %c", &letra);

    while(letra != '.'){
        scanf(" %c", &letra);
        switch(letra) {
            case 'a':
            conta++;break;
            case 'e':
            conte++;break;
            case 'i':
            conti++; break;
            case 'o':
            conto++; break;
            case 'u':
            contu++;break;
        }
    printf("Total de a: %d \n",conta);
    printf("Total de a: %d \n",conte);
    printf("Total de a: %d \n",conti);
    printf("Total de a: %d \n",conto);
    printf("Total de a: %d \n",contu);
    }
}