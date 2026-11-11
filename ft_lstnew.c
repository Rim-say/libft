#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *newNode;

    newNode = (t_list *)malloc(sizeof(t_list));
    if(!newNode)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (newNode);
}

// #include <stdio.h>

// int main()
// {
//     t_list  *node;
//     node = ft_lstnew("Hello World");
//     printf("Content: %s ", (char *)node->content);
//     free(node);
// }