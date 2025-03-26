/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 12:20:32 by csilva-s          #+#    #+#             */
/*   Updated: 2025/03/23 15:22:54 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h> */
/* int	main() */
/* { */
/* 	char *word = "Hello2"; */
/* 	char *word2 = ""; */
/*     unsigned int n = 6; */
/* 	int result = ft_strncmp(word, word2, n); */
/* 	printf("%d", result); */
/* 	return (0); */
/* } */
