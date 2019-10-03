/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crypto_header.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-guil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:08:42 by sle-guil          #+#    #+#             */
/*   Updated: 2019/09/14 15:08:43 by sle-guil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_MD5_CRYPTO_HEADER_H
# define FT_SSL_MD5_CRYPTO_HEADER_H

# include <stdlib.h>
# include <stdint.h>
# include "libft/libft.h"

# define INVALID_OPTION		1
# define EXPECTED_STRING	2

typedef struct	s_cypher{
    uint32_t	(*add_chunk)(const char *);
    char		*(*end)(void);
    uint32_t    buff_len;
    uint32_t	processed;
}				t_cypher;

typedef struct	s_target{
	t_bool		is_file;
	const char	*s;
}				t_target;

typedef struct	s_options{
	t_bool		quiet;
	t_bool		print;
	t_bool		reverse;
	t_bool		string;
	t_list		*target_list;
}				t_options;

t_options		*get_options();
uint			set_options_from_arg(const char *s);
uint			check_conflict();

#endif
