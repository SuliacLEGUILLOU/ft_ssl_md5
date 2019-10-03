
#include "internal.h"

t_md5_cypher	*new_md5()
{
    t_md5_cypher    *cypher;

    cypher = malloc(sizeof(t_md5_cypher));
    ft_bzero(cypher->buff, 65);
    cypher->state = init_state();
    cypher->processed = 0;
    cypher->buff_len = 64;
    cypher->add_chunk = (add_chunk);
    cypher->end = (end_chunk);
    return (cypher);

}
uint32_t		add_chunk(const char *chunk)
{
	return 0;
}
char			*end_chunk(void)
{
	return "a";
}