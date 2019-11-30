#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char*argv[]){
	setlocale(LC_ALL,"Portuguese");
int I;
float soma, media;
float  md [5] ;
soma = 0;
media =0;
for ( I =0; I < 5; I++) {
	printf ("\n digite a média do %do. Aluno : ", I+1 );
	scanf  ("%f", &md[I]);
	soma = soma + md[I];
    }
media = soma /5;
printf  (" A media da turma é :  %.2f ", media);
}

