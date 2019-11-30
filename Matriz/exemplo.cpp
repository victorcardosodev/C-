#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char*argv[]){ 

int i,j;
    float soma, media;
    float notas [1][4];
        soma=0;
    media=0;
    for (i=0;i<1; i++){
    printf ("digite as notas do %do. aluno :\n ",i+1);
    
      for (j=0;j<4; j++){
         printf ("digite a nota do %do. bimestre :\n ",j+1);
        scanf ("%f", &notas[i][j]);
        soma = soma + notas [i][j];
        system("CLS");
        }
      }    
media = soma/4;        
printf ("A media da sala eh : %.2f \n", media);
  system("PAUSE");	
  return 0;
}

