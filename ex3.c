#include<stdio.h>

void main(void){

    int *v, qtde, i = 0, menor, menorIdx, menorSize, procMenor = 1;


    //Define a quantidade de números que serão inseridos
	scanf("%i", &qtde);

    v = malloc(qtde*sizeof(int));

    //Define os números
    while(i < qtde){
        scanf("%i", &v[i]);
        i++;
    }

    i = 0;

    //menor guarda o menor valor obtido até o momento, inicializado com o primeiro valor da array
    menor = v[i];

    //menorIdx guarda o index da array onde começa o excerto que resulta no menor valor
    menorIdx = i;

    //menorSize guarda o tamanho do excerto. Por hora estamos considerando um excerto de 1 número
    menorSize = 1;

    //rodar a array para obter o menor numero
    while(i < qtde){
        if(menor > v[i]){
           menor = v[i];
           menorIdx = i;
        }
        i++;
    }

    //caso menor numero seja maior que 0, retornar 0 conforme enunciado
    if(menor >= 0){
        printf("0\n");
        return;
    }

    /*rodar a array, dessa vez considerando excerto de 2 numeros, caso encontre somatorio menor,
    atualiza as variaveis menorIdx com o inicio do excerto, e menorSize para refletir que o menor
    numero foi obtido considerando excerto de 2 numeros*/
    i=0;
    while(i < (qtde - 1)){

        if(v[i] + v[i+1] < menor){
            menor = v[i] + v[i+1];
            menorIdx = i;
            menorSize = 2;
        }
        i++;
    }

    /*rodar a array, dessa vez considerando excerto de 3 numeros, caso encontre somatorio menor,
    atualiza as variaveis menorIdx com o inicio do excerto, e menorSize para refletir que o menor
    numero foi obtido considerando excerto de 3 numeros*/
    i = 0;
    while(i < (qtde - 2)){

        if(v[i] + v[i + 1] + v[i + 2] < menor){
            menor = v[i] + v[i + 1] + v[i + 2];
            menorIdx = i;
            menorSize = 3;
        }
        i++;
    }


    //imprime o resultado
    i=0;
    while(menorSize > 0){
        printf("%i\n", v[menorIdx + i]);
        menorSize--;
        i++;
    }




}
