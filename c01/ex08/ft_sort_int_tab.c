/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 21:05:36 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/21 15:01:14 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>
int main()
{
    int arr[] = {8,6,4,2,7,2,1,4,2,5,2,5,6,3,2,0};
    int size = sizeof(arr) / sizeof(arr[0]); // Calcula o tamanho do array

    // Imprime o array original
    printf("Array original: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Chama a função para inverter o array
    ft_sort_int_tab(arr, size);

    // Imprime o array invertido
    printf("Array organizado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
*/
