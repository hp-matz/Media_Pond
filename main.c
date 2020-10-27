#include <stdio.h>

/*Elabore um algoritmo receber 4 notas. Exiba a média ponderada das notas, sendo que as duas primeiras notas tem peso 2 e a duas últimas tem peso 3. Caso a média seja maior ou igual a 7, anuncie que o aluno foi aprovado. Caso contrário, está reprovado.*/

int main(void) {

  float n1 = 0;
  float n2 = 0;
  float n3 = 0;
  float n4 = 0;
  float mf = 0;

  printf("\n**  Digite a nota da prova 1: ");
  scanf("%f", &n1);
  printf("\n**  Digite a nota da prova 2: ");
  scanf("%f", &n2);
  printf("\n**  Digite a nota da prova 3: ");
  scanf(" %f", &n3);
  printf("\n**  Digite a nota da prova 4: ");
  scanf("\%f", &n4);

  mf=(n1*2+n2*2+n3*3+n4*3)/10;

  if (mf >= 7){
    printf("\n**  Parabéns o aluno foi aprovado com uma média de %.1f pontos!", mf);
  }
  else {
    printf("\n**  O aluno reprovou :/ e sua média foi de %.1f pontos.", mf);
  }

  return 0;
}