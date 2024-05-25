#include <stdio.h>

int
main ()
{
  int numero;

  printf ("Digite um nC:mero: ");
  scanf ("%d", &numero);


  // primeiro caso
  if (numero == 0)
	{
	  printf ("\nO nC:mero C) igual a zero");
	}

  // segundo caso
  (numero == 0) ? printf ("\nO numero C) igual a zero") : 1;

  // terceiro caso
  switch (numero)
	{
	case 0:
	  printf ("\nO numero C) igual a zero");
	}

  // quarto caso
  (numero > 0) ? 1 : (numero < 0) ? 1 : printf ("\nO numero C) igual a zero");

  return 0;
}
