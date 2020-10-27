#include <stdio.h>
int main()
{
int num;
//Mostra mensagem solicitando um n£mero
printf( "\nDigite um n£mero: ");
//Recebe o n£mero
scanf("%d%*c",&num);
if (num % 2 == 0)
	 printf( "\nO n£mero ‚ par");
else
	 printf( "\nO n£mero ‚ ¡mpar");
return 0;
getchar();
}
