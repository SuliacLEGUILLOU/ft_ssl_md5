/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubbletest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <sle-guil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/22 21:43:23 by sle-guil          #+#    #+#             */
/*   Updated: 2015/01/26 15:57:12 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>
#include "libft.h"

#define TAB_SIZE 10000

static int	test(int i, int j){
	if (i > j)
		return (1);
	return (0);
}

int		main(){
	int		t[TAB_SIZE];
	int		i;
	int		(*f)(int, int);

	f = test;
	for (i = 0; i < TAB_SIZE; i++)
		t[i] = rand();
	SORT_BUB(t, TAB_SIZE - 1, f);
	for (i = 0; i < TAB_SIZE; i++){
		printf("%d\n", t[i]);
	}
	return (0);
}
