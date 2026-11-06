/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 20:36:51 by mhidani           #+#    #+#             */
/*   Updated: 2025/07/25 12:23:35 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_ctkns(const char *s, char c);
static char *ft_extkn(char **pv, char c);
static int ft_lstcls(char **lst, int sz);

char **ft_split(const char *s, char c)
{
	size_t	sz;
	size_t	i;
	char	*pv;
	char	**lst;
	
	if (!s)
		return (NULL);
	sz = ft_ctkns(s, c);
	lst = malloc(sizeof(char *) * (sz + 1));
	if (!lst)
		return (NULL);
	if (!sz)
		return (lst);
	i = 0;
	pv = (char *)s;
	while (i < sz)
	{
		lst[i] = ft_extkn(&pv, c);
		if (ft_lstcls(lst, i))
			return NULL;
		i++;
	}
	lst[i] = NULL;
	return (lst);
}

size_t ft_ctkns(const char *s, char c)
{
	size_t  count;
	char	*pv;

	if (!s)
		return (0);
	count = 0;
	pv = (char *)s;
	while (*pv)
	{
		while (*pv == c)
			pv++;
		if (*pv && *pv != c)
			count++;
		while (*pv && *pv != c)
			pv++;
	}
	return (count);
}

char *ft_extkn(char **pv, char c)
{
	char	*ex;
	char	*bgn;
	size_t	sz;
	size_t	i;

	while (**pv == c)
		(*pv)++;
	if (!**pv) 
		return (NULL);
	bgn = *pv;
	while (**pv && **pv != c)
		(*pv)++;
	sz = *pv - bgn;
	ex = malloc(sizeof(char) * (sz + 1));
	if (!ex)
		return (NULL);
	i = 0;
	while (i < sz)
	{
		ex[i] = bgn[i];
		i++;
	}
	ex[sz] = '\0';
	return (ex);
}

int ft_lstcls(char **lst, int sz)
{
	int	i;

	if (lst[sz])
		return (0);
	i = 0;
	while (i < sz)
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (1);
}
