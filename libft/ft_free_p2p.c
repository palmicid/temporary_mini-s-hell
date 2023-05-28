/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_p2p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pruangde <pruangde@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:24:04 by pruangde          #+#    #+#             */
/*   Updated: 2023/05/26 15:16:35 by pruangde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_p2p_char(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

// return firstchar * == NULL
char	*ft_freemanycharptr(char *ptr1, char **ptr2, char **ptr3, char **ptr4)
{
	if (ptr1)
	{
		free(ptr1);
		ptr1 = NULL;
	}
	if (ptr2[0])
	{
		free(ptr2[0]);
		ptr2[0] = NULL;
	}
	if (ptr3[0])
	{
		free(ptr3[0]);
		ptr3[0] = NULL;
	}
	if (ptr4[0])
	{
		free(ptr4[0]);
		ptr4[0] = NULL;
	}
	return (ptr1);
}
