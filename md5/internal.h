//
// Created by s18 on 12/09/2019.
//

#ifndef FT_SSL_MD5_INTERNAL_H
# define FT_SSL_MD5_INTERNAL_H

# include "md5.h"

uint32_t	rotation(uint i);
uint32_t	constant(uint i);

t_data		init_state();
void		*init_data(char *src, uint64_t len);
uint		get_data_len(const char *src);

uint32_t	state_f(t_data s);
uint32_t	state_g(t_data s);
uint32_t	state_h(t_data s);
uint32_t	state_i(t_data s);

#endif
