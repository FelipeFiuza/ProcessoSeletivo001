#include<stdio.h>

void main(void){

    int *v, qtde, i = 0, testMenor = 0, menor = 1;


    //Define quantidade de números que serão inseridos
	scanf("%i", &qtde);

    v = malloc(qtde*sizeof(int));

    //Recebe os números
    while(i < qtde){
        scanf("%i", &v[i]);
        i++;
    }

    i = 0;
    while(testMenor == 0)
    {
        /*Testa se o numero candidato a menor inteiro nao presente na array
        está de fato ausente da array*/
        while(menor != v[i] && i < qtde){
            printf("%i != %i && %i < %i\n", menor, v[i], i, qtde);
            i++;
        }

        /*Testa se a saída do laço anterior foi por ter encontrado o numero
        na array ou por ter terminado de rodar a array*/
        if(menor == v[i]){
            menor++;
            i = 0;
        } else{
            testMenor = 1;
            printf("%i", menor);
        }
    }



}
