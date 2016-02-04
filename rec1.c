#include <stdio.h>
#include <locale.h>

//enesimo numero da sequencia (1,2,3,4,5..)
int rec1 (int n)
{
  if (n==1)
  return 1;
  else
  return (rec1(n-1) + 1);
}

//enesimo numero da sequencia (1,3,5,7,9..)
int rec2 (int n)
{
  if (n==1)
  return 1;
  else
  return (rec2(n-1) + 2);
}

//enesimo numero da sequencia (2,4,8,16,32..)
int rec3 (int n)
{
  if (n==1)
  return 2;
  else
  return (rec3(n-1) * 2);
}

//enesimo numero da sequencia (0,1,3,6,10,15,21..)
int rec4 (int n)
{
  if (n==1)
  return 0;
  else
  return (rec4(n-1) + (n-1));
}

//enesimo numero da sequencia (1,2,5,14,41...)
int rec5 (int n)
{
  if (n==1)
  return 1;
  else
  return ((rec5(n-1) * 3)-1);
}

//enesimo numero da sequencia (1,3,5,11,21,43...)
//int rec6 (int n)
//{
//  if (n==1)
//  return 1;
//  else
//  return ((rec5(n-1) * 3)-1);
//}


main()
{
  int n, op;
  setlocale(LC_ALL,"Portuguese");
  do
   {  system("cls");
      printf("*** ESCOLHA UMA OPÇÃO: *** \n\n");
      printf("*** 1 - enésimo número da sequencia (1,2,3,4,5...) ***\n");
      printf("*** 2 - enésimo número da sequencia (1,3,5,7,9...) ***\n");
      printf("*** 3 - enésimo número da sequencia (2,4,8,16,32...) ***\n");
      printf("*** 4 - enésimo número da sequencia (0,1,3,6,10...) ***\n");
      printf("*** 5 - enésimo número da sequencia (1,2,5,14,41...) ***\n");
      scanf("%d",&op);
      switch (op)
      {
        case 1:
          printf("Digite um número natural:\n");
          scanf("%d",&n);
          printf("O %dº da sequencia é %d\n",n,rec1(n));
          break;
        case 2:
          printf("Digite um número natural:\n");
          scanf("%d",&n);
          printf("O %dº da sequencia é %d\n",n,rec2(n));
          break;
        case 3:
          printf("Digite um número natural:\n");
          scanf("%d",&n);
          printf("O %dº da sequencia é %d\n",n,rec3(n));
          break;
        case 4:
          printf("Digite um número natural:\n");
          scanf("%d",&n);
          printf("O %dº da sequencia é %d\n",n,rec4(n));
          break;
        case 5:
          printf("Digite um número natural:\n");
          scanf("%d",&n);
          printf("O %dº da sequencia é %d\n",n,rec5(n));
          break;
      }
      getch();
   } while (op < 6);
}
