#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(){
    int     i;

    for (i = -40000; i < 40000; i++){
        //printf("%s\n", ft_itoa(i));
        free(ft_itoa(i));
    }
    /*printf("Iterating for extrem values...\n");
    while (i < i + 1){
        i++;
    }
    printf("done\n");
    printf("%s, %s\n", ft_itoa(i), ft_itoa(i + 1));

    printf("Test for memory leak detection.");
    while (ft_itoa(1))
        getchar
    */
}
