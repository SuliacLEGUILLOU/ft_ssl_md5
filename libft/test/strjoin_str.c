#include <stdlib.h>
#include <stdio.h>

#include "libft.h"

int main(){
    char    **tab = ft_strsplit("b.b.b.b.b.b.bb.b.b.b.b.b.b.b.b.ba.aaba.abaaaaab", '.');

    printf("start\n");
    for (int i = 0; i < 50000; i++)
        free(ft_strjoin_str(tab, " | "));
    //printf("%s\n", ft_strjoin_str(tab, " | "));
    ft_freesplit(tab);
    return (0);
}
