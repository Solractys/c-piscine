/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsousa-n <rsousa-n@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:46:10 by rsousa-n          #+#    #+#             */
/*   Updated: 2025/03/20 00:29:52 by rsousa-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char	*ret;

	ret = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (ret);
}

/*#include <stdio.h>
int main(void)
{
	char test[50] = "asdasdasd asdasdasd 1223 AAA aaa";
	
	ft_strupcase(test);
	printf("%s", test);
	return (0);
}*/
