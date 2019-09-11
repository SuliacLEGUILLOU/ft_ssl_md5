//
// Created by s18 on 11/09/2019.
//

#ifndef FT_SSL_MD5_MD5_H
# define FT_SSL_MD5_MD5_H

# include "../libft/libft.h"
# include "../crypto_header.h"

# include <stdint.h>

typedef struct	s_internal_data{
	uint32_t	a;
	uint32_t	b;
	uint32_t	c;
	uint32_t	d;
}				t_internal_data;

char	*md5(char *src);

uint32_t	md5_rotation(uint i);
uint32_t	md5_constant(uint i);

#endif //FT_SSL_MD5_MD5_H
