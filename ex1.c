#include<stdio.h>

void main(void){

    int *v, qtde, i = 0, testMenor = 0, menor = 1;


    //Define quantidade de n�meros que ser�o inseridos
	scanf("%i", &qtde);

    v = malloc(qtde*sizeof(int));

    //Recebe os n�meros
    while(i < qtde){
        scanf("%i", &v[i]);
        i++;
    }

    i = 0;
    while(testMenor == 0)
    {
        /*Testa se o numero candidato a menor inteiro nao presente na array
        est� de fato ausente da array*/
        while(menor != v[i] && i < qtde){
            printf("%i != %i && %i < %i\n", menor, v[i], i, qtde);
            i++;
        }

        /*Testa se a sa�da do la�o anterior foi por ter encontrado o numero
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
