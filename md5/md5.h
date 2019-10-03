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

typedef struct	s_md5_cypher{
    uint32_t	(*add_chunk)(const char *);
    char		*(*end)(void);
    uint32_t    buff_len;
    uint32_t	processed;
    t_data		state;
    char        buff[65];
}				t_md5_cypher;

char			*md5(char *src);

t_md5_cypher	*new_md5();
uint32_t		add_chunk(const char *chunk);
char			*end_chunk(void);

#endif //FT_SSL_MD5_MD5_H
