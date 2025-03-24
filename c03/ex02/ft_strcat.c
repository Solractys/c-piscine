/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:19:27 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/23 15:11:47 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/* #include <stdio.h> */

/* int main(void) */
/* { */
/*     char    *word = "Hello"; */
/*     char    *word2 = " World"; */

/*     char    *result = ft_strcat(word, word2); */

/*     printf("%c", *result); */
/*     return (0); */
/* } */
