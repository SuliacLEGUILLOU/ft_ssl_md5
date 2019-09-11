/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubbletest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 21:43:23 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/26 16:29:45 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include "libft.h"

#define TAB_SIZE	50

static int	test(int i, int j){
	if (i < j)
		return (1);
	return (0);
}

int		main(){
	int		t[TAB_SIZE];
	int		i;
	int		(*f)(int, int);

	srand(time(NULL));
	f = test;
	for (i = 0; i < TAB_SIZE; i++)
		t[i] = rand() % 100;
	ft_tabsort_qui(t, TAB_SIZE - 1, f);
	printf("SORTING IS DONE %d\n\n", TAB_SIZE);
	for (i = 0; i < TAB_SIZE; i++)
		printf("%d\n", t[i]);
	return (0);
}
