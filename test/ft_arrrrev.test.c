/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrrrev.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:35:22 by pleveque          #+#    #+#             */
/*   Updated: 2021/07/10 19:41:24 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	*create_array(int size);
int *ft_arrreverse(int *array);
void	ft_arradd(int src, int *dest);


int	main()
{
	int	*testarr;

	testarr = create_array(5);
	ft_arradd(1, testarr);
	ft_arradd(2, testarr);
	ft_arradd(3, testarr);
	ft_arradd(4, testarr);
	ft_arrreverse(testarr);

	printf("%d\n", testarr[3]);
}

