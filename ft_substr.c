/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbigot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:48:38 by tbigot            #+#    #+#             */
/*   Updated: 2020/01/06 14:49:15 by tbigot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*newtab;
	size_t		size;
	size_t		i;

	i = 0;
	size = ft_strlen(s);
	if (size < start)
		size = 0;
	else if (size > len)
		size = len;
	if (!(newtab = ft_calloc(size + 1, sizeof(char))))
		return (NULL);
	while (size > i)
	{
		newtab[i] = s[start + i];
		i++;
	}
	return (newtab);
}
