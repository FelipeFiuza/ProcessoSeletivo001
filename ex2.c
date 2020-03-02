#include<stdio.h>
#include<string.h>

int main(void){

    char recipient1[101], recipient2[101], c;
    int testAnagram = 1, i = 0, j = 0, countc = 0;
	scanf("%s", &recipient1);
	scanf("%s", &recipient2);

	if(strlen(recipient1) != strlen(recipient2)){
        printf("false\n");
        return 0;
    }

	while(testAnagram == 1)
    {
        //atribui o caracter da string1 da posicao "0" à variavel c e depois conta quantas ocorrências na variável countc
        c = recipient1[i];
        while(j < strlen(recipient1)){

            if(c == recipient1[j]){
                countc++;
            }
            j++;
        }
        j--;

        //compara o caracter da variavel c com cada caracter da string2, descontando da variável countc a cada ocorrência
        while(j >= 0){

            if(c == recipient2[j]){
                countc--;
            }
            j--;

        }

        //countc sera "0" se a qtde do caracter c for igual nas duas strings
        if(countc != 0)
        {
            printf("false\n");
            testAnagram = 0;
        }

        i++;
        j=0;

        if(i >= strlen(recipient1)){
            printf("true\n");
            testAnagram = 0;
        }

    }
}
