//
// Created by s18 on 11/09/2019.
//

#ifndef FT_SSL_MD5_MD5_H
# define FT_SSL_MD5_MD5_H

# include "../libft/libft.h"
# include "../crypto_header.h"

# include <stdint.h>

typedef struct	s_data{
	uint32_t	a;
	uint32_t	b;
	uint32_t	c;
	uint32_t	d;
}				t_data;

char	*md5(char *src);

#endif //FT_SSL_MD5_MD5_H
