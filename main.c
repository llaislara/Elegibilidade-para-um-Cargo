#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(void) {
  int idade, fluente; 
  float altura; 
  char genero; 

  printf ("Insira o valor correspondente ao seu genero: F para Feminino, M para Masculino:\t");
  scanf ("%c", &genero);
  genero= toupper(genero); 

  if (genero == 'M') {
    printf ("Você não está apto para o trabalho.");
  }

  if (genero == 'F') {
    printf("Insira sua idade:\t"); 
    scanf("%d", &idade); 
    printf ("Insira sua altura em cm:\t"); 
    scanf("%f", &altura);
    printf ("Quantos idiomas você fala fluentemente?\t"); 
    scanf ("%d", &fluente);
    if ((idade>=24) && (altura>= 170) && (fluente>=2))
      printf("\nParabéns, você está apta para o trabalho!");
    else 
      printf ("Você não pode participar do processo seletivo da empresa");
  }
  return 0;
}
