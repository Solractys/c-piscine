#include <unistd.h>		// Para usar a função write
#include "ft_putchar.c" // Inclui diretamente o código de ft_putchar, sem a necessidade de .h

void rush(int largura, int altura)
{
	int i = 0; // Inicializa o contador da linha

	while (i < altura)
	{			   // Loop para as linhas
		int j = 0; // Inicializa o contador da coluna

		while (j < largura)
		{ // Loop para as colunas
			// Imprime os cantos com 'o'
			if ((i == 0 || i == altura - 1) && (j == 0 || j == largura - 1))
			{
				ft_putchar('o');
			}
			// Imprime as bordas horizontais com '-'
			else if (i == 0 || i == altura - 1)
			{
				ft_putchar('-');
			}
			// Imprime as bordas verticais com '|'
			else if (j == 0 || j == largura - 1)
			{
				ft_putchar('|');
			}
			// Imprime espaços internos
			else
			{
				ft_putchar(' ');
			}
			j++; // Incrementa a coluna
		}
		ft_putchar('\n'); // Nova linha após cada linha do padrão
		i++;			  // Incrementa a linha
	}
}
