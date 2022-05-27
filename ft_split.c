/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aceralin <aceralin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 12:58:12 by aceralin          #+#    #+#             */
/*   Updated: 2022/05/27 18:40:25 by aceralin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_strs(const char *s ,char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if(s[i] != c && s[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		if (s[j] == c && s[j + 1] != c && s[j + 1] != '\0')
		{
			i++;
			printf("i:%d\n",i);
			printf("j:%d\n",j);
		}
		j++;
		
	}
	printf("i:%d\n",i);
	return(i); // nombre de mots
}

char	*word_extraction(const char *str, char c)
{
	int		i;
	char	*word;
	
	i = 0;
	while(str[i] && str[i] != c)
		i++;
	//printf("%d\n",i);
	word = (char *)malloc(sizeof(char) * (i + 1));
	if(!word)
		return(0);
	i = 0;
	while(str[i] && str[i] != c)
	{
		//printf("la:%s\n",str);
		word[i] = str[i];
		i++;
		//printf("ici:%s\n",word);
	}
	word[i] = '\0';
	//printf("mots:%s\n",word);
	return(word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		words;
	
	if(!s)
		return (0);
	words = ft_count_strs(s, c);
	tab = (char **) malloc(sizeof(char *)* (words + 1));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while(s[i] && s[i] == c)
			s++;
		if(s[i] &&  s[i] != c)
		{
			tab[j] = word_extraction(s + i, c);
			if(tab[j] == 0)
				free(tab);
				return(0);
			i++;
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	tab[j]= NULL;
	return (tab);	
}

int main()
{
	int 	i;
	char **strs = ft_split("  Je m'appelle Alix CERALINE",' ');
	i = 0;
	while(strs[i])
	{
		printf("Split:%s\n", strs[i]);
		i ++;
	}
	
	//printf("Split:%s\n",* ft_split("Je m'appelle Alix CERALINE  ",' '));
	//printf("Split:%s\n",* ft_split("Je   m'appelle Alix CERALINE",' '));
	//printf("Split:%s\n",* ft_split("        aaaa",' '));
	return(0);
}