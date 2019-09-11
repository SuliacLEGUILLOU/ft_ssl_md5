//print
// Created by s18 on 11/09/2019.
//

#ifndef FT_SSL_MD5_CRYPTO_HEADER_H
# define FT_SSL_MD5_CRYPTO_HEADER_H

# include <stdlib.h>
# include "libft/libft.h"

# define INVALID_OPTION		1
# define EXPECTED_STRING	2

typedef struct	s_target{
	t_bool		is_file;
	const char 	*s;
}				t_target;

typedef struct	s_options{
	t_bool		quiet;
	t_bool 		print;
	t_bool		reverse;
	t_bool		string;
	t_list		*target_list;
}				t_options;

t_options		*get_options();
uint			set_options_from_arg(const char *s);
uint			check_conflict();

#endif //FT_SSL_MD5_CRYPTO_HEADER_H