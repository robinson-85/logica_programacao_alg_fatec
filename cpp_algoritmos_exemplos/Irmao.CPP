#include <stdio.h>
int main()
{
int pai1,pai2,filho1,filho2;

printf( "\nDigite um filho: ");
scanf("%d%*c",&filho1);
printf( "\nDigite o pai: ");
scanf("%d%*c",&pai1);

printf( "\nDigite um filho: ");
scanf("%d%*c",&filho2);
printf( "\nDigite o pai: ");
scanf("%d%*c",&pai2);

if ((pai1==pai2)&&(!(filho1==filho2)))
	 printf( "\nOs filhos sao irmao");
else
	 printf( "\nSao as mesmas pessoas ");
return 0;
getchar();
}

//irmao(X,Y):-genitor(Z,X),genitor(Z,Y),homem(Y),not(X=Y).
