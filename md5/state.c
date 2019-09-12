//
// Created by s18 on 12/09/2019.
//

#include "internal.h"

t_data		init_state()
{
	t_data		s;

	s.a = 0x67452301;
	s.b = 0xefcdab89;
	s.c = 0x98badcfe;
	s.d = 0x10325476;
	return s;
}