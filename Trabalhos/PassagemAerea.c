#include <stdio.h>

int main()

{
 int origem, destino;
  printf("\nPrograma para compra de passagens aereas.\n");
  printf("\nOla, meu nome e Abner, qual e a sua origem? (1-Rio/2-SP/3-SSA)\n");
  scanf("%d", &origem);
  
  switch(origem)
  {
    case 1:
      printf("\nEntendi, Rio de Janeiro. Qual é seu destino (2-SP/3-SSA)?\n");
      break;
    case 2:
      printf("\nEntendi, São Paulo. Qual é seu destino (1-Rio/3-SSA)?\n");
      break;
    case 3:
      printf("\nEntendi, Salvador. Qual é seu destino (1-Rio/2-SP)?\n");
      break;
    default:
      printf("Opcao invalida!\n");
  }
   scanf("%d", &destino);
  
  switch(destino)
  {
    case 1:
      printf("\nEntendi, Rio de Janeiro.\n");
      break;
    case 2:
      printf("\nEntendi, São Paulo.\n");
      break;
    case 3:
      printf("\nEntendi, Salvador.\n");
      break;
    default:
      printf("Opcao invalida!\n");
      break;
  }
  if (origem==destino )
   {
      printf("\nOps!! Seu destino não pode ser o mesmo que a origem, escolha um destino diferente. Qual é seu destino?\n");
      scanf("%d",&destino);
   }
  else if ((origem==3)&&(destino==1))
    {
      printf("\nValor para passagem Salvador -> Rio de Janeiro: R$280,00 ou US$%.2f.\n\n\n", 280/3.40);
    }
  if ((origem==3)&&(destino==2))
    {
      printf("\nValor para passagem Salvador -> São Paulo: R$175,00 ou US$%.2f.\n\n\n", 175/3.40);
    }
  else if ((origem==2)&&(destino==1))
    {
      printf("\nValor para passagem São Paulo -> Rio de Janeiro: R$160,00 ou US$%.2f.\n\n\n", 160/3.40);
    }
  if ((origem==2)&&(destino==3))
    {
      printf("\nValor para passagem São Paulo -> Salvador: R$180,00 ou US$%.2f.\n\n\n", 180/3.40);
    }
  else if ((origem==1)&&(destino==2))
    {
      printf("\nValor para passagem Rio de Janeiro -> São Paulo: R$150,00 ou US$%.2f.\n\n\n", 150/3.40);
    }
  if ((origem==1)&&(destino==3))
    {
      printf("\nValor para passagem Rio de Janeiro -> Salvador: R$300,00 ou US$%.2f.\n\n\n", 300/3.40);
    }
    
    
  return 0;
}