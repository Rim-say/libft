#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len;
    t_list  *current;

    len = 0;
    current = lst;
    while (current != NULL)
    {
        len++;
        current = current->next;
    }
    return (len);
}

// #include <stdio.h>

// int main()
// {
//     r_list *head;
//     t_list *new;
//     head = NULL;
//     new = ft_lstnew("hello");
//     ft_lstadd_front(&head, new);
//     new = ft_lstnew("world");
//     ft_lstadd_front(&head, new);
//     printf("%d", ft_lstsize(head));
//     while ( head != NULL)
//     {
//         new = head->next;
//         free(head);
//         head = new;
//     }
// }