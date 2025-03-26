/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:50:10 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/23 15:23:34 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] && nb > 0)
	{
		dest[j + i] = src[i];
		i++;
		nb--;
	}
	dest[j + i] = '\0';
	return (dest);
}
/* #include <stdio.h> */

/* char	*ft_strncat(char *dest, char *src, unsigned int nb); */

/* int	main() { */
/*     char dest[50] = "Hello, "; */
/*     char src[] = "World!"; */

/*     printf("String original: %s\n", dest); */

/*     // Concatenar até 3 caracteres de src em dest */
/*     ft_strncat(dest, src, 3); */

/*     printf("String após ft_strncat: %s\n", dest); */

/*     return 0; */
/* } */
